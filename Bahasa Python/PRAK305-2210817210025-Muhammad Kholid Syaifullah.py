bil = int(input())
detik = bil % 60
mnt = bil // 60
if (mnt > 59) : 
    menit = mnt % 60
else : 
    menit = mnt
jm = mnt // 60
if (jm > 23) :
    jam = jm % 24 
    hari = jm // 24
    print("%d hari %.2d:%.2d:%.2d"%(hari, jam, menit, detik))
else :
    jam = jm
    print("%.2d:%.2d:%.2d"%(jam, menit, detik))