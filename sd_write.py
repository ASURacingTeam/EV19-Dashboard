drive = "" # physical name of the drive
sector_size = 512 
d = [] # image hex array
disk = open(drive,'rb')
disk.write(d) # writes the array to the sd card starting from address 0

