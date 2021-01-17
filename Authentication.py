from twilio.rest import Client
import random
import string

account_sid = 'ACc7a10e087e811dfcbd073ec441bb2060'
auth_token = '366db798d1e24cc11e76038152c85c48'

client = Client(account_sid, auth_token)
phonenum = input("Enter your phone number for verification: ")
pw = input("Enter in your password (for something, use your imagination i guess): ")
letters = string.ascii_lowercase
code = ""
for i in range(10):
    code += ''.join(random.choice(letters)) 
    
message = client.messages.create(
    to="+1" + phonenum,
    from_="+19704419271",
    body="Your verification code is " + code
)

check = input("Enter in your verification code: ")
if check == code:
    print("You successfully passed the authentication!")
else:
    print("Incorrect code")