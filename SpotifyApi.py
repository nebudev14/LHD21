import spotipy
from spotipy.oauth2 import SpotifyClientCredentials

cid = ''
secret = ''



artist_uri = input("Enter in the Spotify Artist Link to get statistics about that artist: ")
spotify = spotipy.Spotify(client_credentials_manager=SpotifyClientCredentials(client_id=cid, client_secret=secret))


album_results = spotify.artist_albums(artist_uri, album_type='album')
albums = album_results['items']
while album_results['next']:
    results = spotify.next(results)
    albums.extend(results['items'])

print(spotify.artist(artist_uri)['name'] + ": \n----------\n")
print("Follower Count : " + str(spotify.artist(artist_uri)['followers']['total']) + "\n----------\n")
print("Albums: \n----------")
for album in albums:
    print(album['name'])
print("Top 10 Tracks: \n----------\n")
top10 = spotify.artist_top_tracks(artist_uri)
for track in top10['tracks'][:10]:
    print("-" + track['name'])
