import shutil
src = ('1.3.jpg')
dst = 'C:\\Users\\BHS\\Desktop\\1.3.jpg'
count = 1
while count < 10000000000:
    shutil.copyfile(src, dst + str(count) + ".jpg")
    count += 1
