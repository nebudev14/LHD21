import webbrowser
import schedule
import time

def geo():
    url = 'insert meeting link'
    webbrowser.register('chrome', None, webbrowser.BackgroundBrowser("C://Program Files (x86)//Google//Chrome//Application//chrome.exe"))
    webbrowser.get('chrome').open(url)
def history():
    url = 'insert meeting link'
    webbrowser.register('chrome', None, webbrowser.BackgroundBrowser("C://Program Files (x86)//Google//Chrome//Application//chrome.exe"))
    webbrowser.get('chrome').open(url)
def bio():
    url = 'insert meeting link'
    webbrowser.register('chrome', None, webbrowser.BackgroundBrowser("C://Program Files (x86)//Google//Chrome//Application//chrome.exe"))
    webbrowser.get('chrome').open(url)
def spanish():
    url = 'insert meeting link'
    webbrowser.register('chrome', None, webbrowser.BackgroundBrowser("C://Program Files (x86)//Google//Chrome//Application//chrome.exe"))
    webbrowser.get('chrome').open(url)
def english():
    url = 'insert meeting link'
    webbrowser.register('chrome', None, webbrowser.BackgroundBrowser("C://Program Files (x86)//Google//Chrome//Application//chrome.exe"))
    webbrowser.get('chrome').open(url)


schedule.every().day.at("09:20").do(geo)
schedule.every().day.at("10:42").do(history)
schedule.every().day.at("11:40").do(bio)
schedule.every().day.at("12:27").do(spanish)
schedule.every().day.at("01:14").do(english)

while True:
    schedule.run_pending()
    time.sleep(1)


