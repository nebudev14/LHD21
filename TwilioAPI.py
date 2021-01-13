from twilio.rest import Client

account_sid = ''
auth_token = ''
client = Client(account_sid, auth_token)

phonenum = input("Enter in the number you want to message/call (+1): ")
message = input("Enter in the message you want to send: ")
choice = input("Would you like to text or call this person? ")

if choice == "text":
    message1 = client.messages.create(
        to="+1" + phonenum, 
        from_="+19704419271",
        body=choice
    )
elif choice == "call":

    call = client.calls.create(
        to="+1" + phonenum,
        from_="+19704419271",
        twiml='<Response><Say>' + message + '</Say></Response>'
    )
