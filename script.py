import serial
import time

# config :3 
serial_port = "COM7"
baud_rate = 19200     # just... don't mess with this I don't even know how I decided on this baud rate but the other ones didn't want to work
file_path = "input.txt"
ms_per_line = 50    
min_delay_ms = 10     # do not mess with this either because if you do it will not work, uh, I don't think the arduino reads it fast enough. 


ser = serial.Serial(serial_port, baud_rate, timeout=1)
time.sleep(2)  # another arduino timing thing

with open(file_path, 'r') as file:
    lines = [line.strip() for line in file]

line_count = 0

for line in lines:
    if line == '1':
        delay_ms = line_count * ms_per_line
        time.sleep(delay_ms / 1000) #uh yeah this measures in seconds so I had to divide it by 1000 although there could be a better way to do this but I am a burnt out gal okay
        ser.write(b'a') #the b here is because I need it to be bytes. because or else it does not want to work. I need to look into how it works. I had to google it and if I didn't 
        #put this b right here it would expect some other format, or something along those lines, and like, I don't really need to give myself that headache cos I can just
        #put that b right there
        print(f"Kicked after {line_count} lines (which is{delay_ms} ms)")
        time.sleep(min_delay_ms / 1000)
        line_count = 0
    elif line == '2':
        delay_ms = line_count * ms_per_line
        time.sleep(delay_ms / 1000)
        ser.write(b'b')  
        print(f"THWACK after {line_count} lines (that's{delay_ms} ms)")
        time.sleep(min_delay_ms / 1000)
        line_count = 0
    else:
        line_count += 1

        #ok so this mess of code basically says so if it detects 1 in the text it sends a command to kick and if it sees a 2 in the text it sends that ol' THWACK 
        #and if it detects an empty line or like. anything else I guess but I don't know how to make it detect specifically a blank line besides detecting /n
        #anyways if it detects a lot of blank lines or y'know unwatned characters it just adds up a counter of how much that has been, and, then multiplies that by the time you have
        #set for it to wait for every blank line. If you have an easier way to time this thing, uh, too bad because this is my project haha (no offense)
ser.close()
print("Wowza wasn't that something,")


#thank you google and quora and stack overflow and whoever else