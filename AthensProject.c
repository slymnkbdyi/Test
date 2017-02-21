

#Ubuntu krusader hata alındğında terminalden uygulanacak komut
ssh-keygen -R 10.10.10.50



#Parametre Değiştirme
FB523 -> <maxStoreCap> //Harcanan paradan sonra ücretsiz geçiş
FB523 -> <sameVehicleTrnsfrYn> //transfer ayarları yapılır
FB523 -> <boardngRetagPosblTime>,<disembrkRetagPosblTime> //check in, check out süreleri ayarlanır
FB500 -> <sameBusReboardingTime> //aynı otobüs aktarma süresi ayarlanır
FB526 -> <boardngFare>,<totFare>,<disembrkFare> //alınacak ücretleri belirler !!!totfare=boarding+disembrk!!!

#FTP User Name
user: lg@dtsis.com
pass: LglG1234

#Test_OVMC
tail -F /nohup.out
rm -f /opt/app/bin/OVMCLogCollector
rm -f /opt/app/bin/settings.ini
rm -f /etc/rc5.d/S90logcollector.sh


#Watchdogları durdurmak
/etc/init.d/app-run.sh stop
killall -2 val-watchdog
/etc/init.d/wdt_stop.sh
/etc/init.d/syslog stop

#oswlhst3g_oswlhst
psk=f8dfa916f464239d342e19969bf2eaab0ee61010afafb711998fcc0b9a13ed1d
psk=9292122b1bca91d4c45c68e934fb7f8b23f83bed0c516c8c145230758b1e4604

#Wifi ve ETH Testerinde kullanılan IPerf Komutu
iperf3 -uZVc 192.168.1.7 -p 5021 -b0 -l8192 -t5 -fm

#Ubuntu krusader hata alındğında terminalden uygulanacak komut
ssh-keygen -R 10.10.10.50

#Wifi Üzerinden fw_update ve xml gönderme
SSID: oswlhst (hidden)
Password: hstwl!0112

#OVMC & OSCVM Ekran Görüntüsü Alma
cat /dev/fb0 > 1.raw
ffmpeg -vcodec rawvideo -f rawvideo -pix_fmt bgr24 -s 800x480 -i 1.raw -f image2 -vcodec png 1.png //OVMC
ffmpeg -vcodec rawvideo -f rawvideo -pix_fmt bgr24 -s 480x272 -i 1.raw -f image2 -vcodec png 1.png //OSCVM

#Günlük Yapılması Gereken Kontroller
uptime
cat /proc/meminfo

#Cihaz update ayararını görüntüleme ve değiştirme
cat /opt/data/install.log  //instal bilgilerini öğrenme
vi /opt/app/current_version  //versiyon bilgisi değiştirme
vi /opt/app/current_version_id  //dosya ismi değiştirme (tarih daha eskiye alınırsa update işlemi tekrar başlar)

#Parametre dosyalarının bulunduğu dizin
/opt/data/params

#Wifi etkin/devredışı
ifup wlan0
ifdown wlan0

echo 1 > /sys/class/leds/led4g/brightness //Led yakma
echo 0 > /sys/class/leds/led4g/brightness //Led Söndürme

#Installation Fail Durumları
	VAL_INSTALL_RESULT_OK = 0,
    VAL_INSTALL_RESULT_LOCAL_OK = 1,
    VAL_INSTALL_RESULT_OVMC_NOT_CONFIGURED = 2,
    VAL_INSTALL_RESULT_WRONG_IP = 3,
    VAL_INSTALL_RESULT_WRONG_DEVICE_TYPE = 4,
    VAL_INSTALL_RESULT_WRONG_MAIN_DEVICE_NO = 5,
    VAL_INSTALL_RESULT_OUT_OF_RANGE = 6,
    VAL_INSTALL_RESULT_DISCONNECT = 7,
    VAL_INSTALL_RESULT_FAIL = 8,
    VAL_INSTALL_RESULT_SUB_DISCONNECT = 9,
    VAL_INSTALL_RESULT_TIMEOUT = 10,
    VAL_INSTALL_RESULT_AUTH_FAIL = 11,
    VAL_INSTALL_RESULT_NO_WIFI = 12,
    VAL_INSTALL_RESULT_WRONG_SAM_COUNT = 13,
    VAL_INSTALL_RESULT_CONFIG_ERROR = 14,
    VAL_INSTALL_RESULT_WRONG_DEVICE_ID = 15,
    VAL_INSTALL_RESULT_NO_SAM = 16,
    VAL_INSTALL_RESULT_IP_ACQ_ERROR = 17,
    VAL_INSTALL_RESULT_PARAMETER_ERROR = 18

#Flash Oluşturma
sudo ./create_param.sh -t tram -i obch -f obch/Obch2_v1.1.2.34.hex
sudo ./create_param.sh -t tram -i rdr -f reader/RdrLg2_v1.1.2.20.hex

#Authentication kapalı/açık flash oluşturma
sudo ./create_update.sh -o . -uov -uos -t bus --noauth //authentication kapalı
sudo ./create_update.sh -o . -t bus //authentication açık

#ETH mtu Ayarlama
ifconfig eth0 mtu 500

#USB Dump Oluşturma
sudo ./create_dumprec.sh /media/izmirkart/KINGSTON/

#Syslog dosyaya yazma ayarı
vi /etc/syslog-startup.conf => DESTINATION=file BUFFERSIZE=2048
/etc/init.d/syslog restart

#OSCVM Ayar Sıfırlama
rm /opt/data/params/F*.*;rm /opt/data/config/main_config.ini;sync;sync;/etc/init.d/oscvm.sh stop;sync;sync;sync;
rm /opt/data/params/F*.*;rm /opt/data/config/main_config.ini;sync;sync;/etc/init.d/ovmc.sh stop;sync;sync;sync;

#SSH ile dosya kopyalama
scp -p root@10.10.10.51:/var/log/messages /run/media/sda1/mes2 //[cmd] [ssh adresi]:[kopyalanacak dosyanın konumu] [dosyanın yapıştırılacağı konum]
'scp -p root@10.10.10.51:/mnt/mbfs/log/* /mnt/mbfs/log/51/'
'scp -p root@10.10.10.52:/mnt/mbfs/log/* /mnt/mbfs/log/52/'
'scp -p root@10.10.10.53:/mnt/mbfs/log/* /mnt/mbfs/log/53/'
'scp -p root@10.10.10.54:/mnt/mbfs/log/* /mnt/mbfs/log/54/'

#SAMd20 Programlama
Cihaz ile Programmer kablo bağlantısı yapılır > Cihaza elektrik verilir > Ptogrammer USB kablosu PC ye takılır >
D:\Projects\Athens\SAMd20>edbg.exe -vbep -t atmel_cm0p -f i2c_slave_bootloader.bin
D:\Projects\Athens\SAMd20>edbg.exe -o 0x2000 -bpv -t atmel_cm0p -f samd20_fw.bin

#nand Test 
cat /proc/mtd //mtd öğrenme
nandtest -p 3 /dev/mtd6


{
#OVMC & OSCVM Ayarları Sıfırlama
rm -R /opt/data/

#OVMC SMS Komutları
read //ip öğrenmek için kullanılır
reset //cihazı yeniden başlatmak için kullanılır
apn=mgb,apnuser=internet,apnpass=internet //apn ayarı için kullanılır
	
#OVMC & OSCVM Komut ile Kurulum Moduna Alma
rm /etc/rc5.d/S91dtsrd-demo.sh
rm -r /opt/dtsis
dosyaları kopyala
ln -s ../init.d/ovmc.sh /etc/rc5.d/S91ovmc
yada
ln -s ../init.d/oscvm.sh /etc/rc5.d/S91oscvm
reboot
	
#OVMC & OSCVM Tuş Ayarları
/etc/modprobe.d/qt1070.conf

OSCVM
options qt1070 dump=1
options qt1070 lp=16
# oscvm v1 20160116 modifiyeli flex pcb btn v1 values
options qt1070 nthr=20,10,10,8,10,8,12
options qt1070 ave=8,16,16,16,16,16,16
options qt1070 di=10,10,10,10,10,10,10
options qt1070 maxondur=100

#OVMC ppp options (3G bağlantısı için yapılması gerekmektedir)
/etc/ppp/options //dosyasının içine aşağıdaki kodlar kopyalanacak

/dev/ttyUSB3

nocrtscts
defaultroute
ipcp-accept-local
ipcp-accept-remote
ipcp-restart 10
noauth
local

lcp-echo-interval 30
lcp-echo-failure 4
lcp-max-configure 60
lcp-restart 2


#Uygulamayı durdurma
killall start.sh;killall qovmc
killall start.sh;killall qoscvm
/etc/init.d/oscvm.sh stop
/etc/init.d/oscvm.sh start

#OVMC 10.231.10.7 Wifi Bağlanma Ayarı
nano /etc/wpa_supplicant.conf //Dosyasındaki ikinci wifi ayarlarının önüne # konulması gerekmektedir.

#OSCVM'yi SCVM olarak ayarlama
vi /opt/data/cofig/main_config.ini -> DEVICE_TYPE=2 //olarak değiştirilir
rm /etc/rc5.d/S02configure-eth0 //Dosyası silinir
rm -f /opt/data/params/ //klasöründe bulunan bütün dosyalar silinir.
vi /etc/network/interfaces -> auto eth0 iface eth0 inet static address 10.231.10.120 netmask 255.255.255.0 network 10.231.10.0 //dosya içeriği yandaki gibi ayarlanır

#SCVM cihazının gerçek servera bağlanması için yapılması gereken ayarlar
<Bus>
SERVER_IP=10.77.134.176
<Tram>
SERVER_IP=10.77.134.171
<Metro>
SERVER_IP=10.77.134.162
SERVER_IP_MODE=1
route add -net 10.77.134.0 netmask 255.255.255.0 gw 10.231.10.1 eth0
<Suburban>
SERVER_IP=10.77.134.156
DEVICE_ID=40000051
SERVER_IP_MODE=1
route add -net 10.77.134.0 netmask 255.255.255.0 gw 10.231.10.1 eth0

#Kernel Güncelleme
cp /run/media/sda1/zImage /boot/
sync
tar zxvf /run/media/sda1/modules--3.14.28-r0-ovmc-20160611120536.tgz -C /
sync
reboot
depmod
syncreboot

#SAMd20 Touch Buttons Ayarları
"Programlama Adımları"
'D:\Projects\Athens\SAMd20>edbg -bpve -t atmel_cm0p -f samd20-qtouch_v20160525.bin //g18'
'D:\Projects\Athens\SAMd20>edbg -bpve -t atmel_cm0p -f samd20-qtouch_20160608.bin'
Cihaz ile Programmer kablo bağlantısı yapılır > Cihaza elektrik verilir > Ptogrammer USB kablosu PC ye takılır >
D:\Projects\Athens\SAMd20>edbg.exe -vbep -t atmel_cm0p -f i2c_slave_bootloader.bin
D:\Projects\Athens\SAMd20>edbg.exe -o 0x2000 -bpv -t atmel_cm0p -f samd20_fw.bin
"Linux Komutları"
cp /run/media/sda1/samd20_fw.bin /lib/firmware/
cp /run/media/sda1/samd20-qtouch_20160611_x12.bin /lib/firmware/samd20_fw.bin
echo 1 > /sys/devices/soc0/soc.0/2100000.aips-bus/21a4000.i2c/i2c-1/1-002b/fw_update

cp /media/hostpc/dimod6v1/samd20-qtouch.bin /lib/firmware/
echo  "samd20-qtouch.bin" > /sys/devices/soc0/soc.0/2100000.aips-bus/21a4000.i2c/i2c-1/1-002b/fw_name //update işleminde kullanılacak ismi değiştirmek için kullanılır
echo "samd20-fw.bin" > /sys/devices/soc0/soc.0/2100000.aips-bus/21a4000.i2c/i2c-1/1-002b/fw_update

samd20 touch button için
qt1070.conf test ayarları:
options qt1070 dump=1
options qt1070 lp=1
options qt1070 nthr=10,10,10,15,10,10,15 (tuş sıralaması:3,4,5,6,1,2,7)
options qt1070 ave=8,8,8,8,8,8,8
options qt1070 di=2
options qt1070 maxondur=15

echo 1 > /sys/devices/soc0/soc.0/2100000.aips-bus/21a4000.i2c/i2c-1/1-002b/hwreset

"Kontrol Komutları"
evtest
rmmod qt1070
modprobe qt1070
/etc/init.d/dtsrd-qtdemo.sh restart
while true; do cat /sys/devices/soc0/soc.0/2100000.aips-bus/21a4000.i2c/i2c-1/1-001b/regs; done
echo 1 > /sys/class/leds/qt1070_rst/brightness
echo 0 > /sys/class/leds/qt1070_rst/brightness
while true; do cat /sys/devices/soc0/soc.0/2100000.aips-bus/21a4000.i2c/i2c-1/1-001b/regs; done
echo 1 > /sys/devices/soc0/soc.0/2100000.aips-bus/21a4000.i2c/i2c-1/1-001b/calibrate

#SSH ile kurulumsuz cihazlara erişme
route add -net 10.10.10.255 netmask 255.255.255.0 eth0

#Parametre ismi değiştirme
mv /opt/data/params/FB001.20160406000000.20160406000000.20160406000000.0000.dat /opt/data/params/FB001.20160601000000.20160601000000.20160601000000.0000.dat
mv /opt/data/params/FB002.20160406000000.20160406000000.20160406000000.0000.dat /opt/data/params/FB002.20160601000000.20160601000000.20160601000000.0000.dat

mv /opt/data/params/FS051.20160617102542.20160617102542.20160617102542.0000.dat /opt/data/params/FM051.20160618000000.20160618000000.20160618000000.0000.dat

#Touchscreeb hassasiyetini değiştirme
echo 25 > /sys/bus/i2c/devices/0-0038/gain
echo 1 > /sys/bus/i2c/devices/0-0038/auto_calibrate

#Touchscreen Driver Update
cp /run/media/sda1/ft5x06_ts.ko /lib/modules/3.14.28-1.0.0_ga+v1.02.46+g587467f/kernel/drivers/input/touchscreen/

#Modül Test Programında Uygulanan Komutları
setenv mt_pingipaddr "192.168.1.1"
setenv ipaddr "192.168.1.14"
editenv nandargs
ip=192.168.1.14

#ETH Testi Iperf Komutları
iperf3 -s //cihaz server olarak ayarlanır
iperf3 -c 192.168.0.172 -n999999M //Server olarak ayarlanan cihaza ping atılır

#ETH için yeni dosyaların kopyalanması
cp /run/media/sda1/zImage /boot/;cp /run/media/sda1/imx6dl-dimod6v11-oscvm-ldo.dtb /boot/
sync

#ETH kilitlenmelerinde kontrol edilecekler
set editenv ipaddr
'grep "" /sys/class/net/eth0/*'
}