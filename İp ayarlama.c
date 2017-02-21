#İp/Port Adresi Değiştirme
cd /mnt/media/app/bin/
val-config --app_ip 192.168.0.248
val-config --app_port 30156
val-config --term_no 1
val-config --help //değiştirlebilecek

reboot
#APN ayarı değiştirme
vi /etc/chat_script //apn isminin bulunduğu dosya
vi /etc/init.d/check_ppp //GPS bağlantısının ping atttığı adresi değiştirme

#Flash Disk Mount Etme
mntrw //dosya sistemi read-only ise kullanılacak
mkdir /mnt/sda1
mount /dev/sda1 /mnt/sda1/

#Tar Dosyası Çıkarma
cd /mnt/sda1/
tar -xvzf qval_bin.tar.gz -C /mnt/media/app/bin/ //istenilen konuma çıkarır
tar -xvzf qval_bin.tar.gz -C / //ana dizine çıkarır (bu kullanılacak)

#WinXP ile yüklenen dosya sisteminin açılmaması durumunda izlenecek adımlar
cat /etc/hotplug/usb.rc //dosya içeriğinde "gpio89" varmı bakılacak
Be51kta$755
mntrw
mkdir /mnt/sda1 //sda1 dosyası oluşturulacak
mount /dev/sda1 /mnt/sda1/ //flash disk mount edilecek
cp /mnt/sda1/files/usb.rc /etc/hotplug
cp /mnt/sda1/files/gpio89 /bin

#ubuntu ftp bağlanma
prj-izmir@ftp2.dtsis.com

#cihazın ip adresini değiştirme
/etc/config //cihaz ip
/etc/syslog.conf //logread özelliği

#wifi adaptör
10.6.100.202 //varsayılan ip adresi
255.255.0.0 //lan mask

#Test Cihazının ethernet ip'si
192.168.0.90
ifconfig eth0 'ip adresi'

#eski vi kullanımı
x silme
insert yerine yazma
esc çıkma

#Saat Set etme
date -s 052817522015
hwclock -w

#ethernet ip adresini öğrenme
10.0.20.51
192.168.1.1 ethernet ip adresi

#ftp bilgileri
ftp2.dtsis.com
prj-izmir
prj_1zmir

#SKP ile terminal set etme
kart takılı değil...
1 bas tamam de
terminal no girin ok
65535 ten küçük 5 haneli terminal

#GPRS li Turnike Validatör ayarı
gprs ip sinin öğrenip script attır //whats app ile script atılmasını bekle
RoutFS diskini tak succes yazısını gör//kısa sürede 
APP diskini tak cihazı aç 

#GPRS li Turnike Validatör ayarı
Laptop ethernet switchine takılacak
yerel ağ ip ayarla
ifconfig eth0 10.6.145.224

#ethernet set edildikten sonra flashta oluşan
/dev.ip dosyasının içindeki 0 ları temizle
sudo grep /media/

# ftp çalışmayan makinalarda
telnet 'ip adresi'
Be51kta$755
mntrw
cat > /etc/rcS.d/S21check_media
chmod 777 /etc/rcS.d/S21check_media
sync

10.23.20.2 sunucu ipsi

#esnet şifre
2902Keu2007xs

#podayva şifre
Omran19892015

#MMVal Root Şifresi
IzmIrCar

#Izmir MMVal Head/Tail Sıfırlama
killall start.sh ;killall asis-watchdog ;killall asis-updater ;killall qvalidator ;killall start_emmp.sh ;killall emmp ;killall start_gprs.sh ;killall asis-gprs;/opt/asis/scripts/wd_feeder.sh 120 &
/opt/asis/bin/val-config --rIndex 1900 ;/opt/asis/bin/val-config --wIndex 0 ;/opt/asis/bin/val-config --dump

#KKVal Versiyon numarası değiştirme
echo 9007 > /mnt/media/app/current_version

gpshnd

#Reader Güncelleme
killall start.sh ;killall asis-watchdog ;killall asis-updater ;killall qvalidator ;killall start_emmp.sh ;killall emmp ;killall start_gprs.sh ;killall asis-gprs ;/opt/asis/scripts/wd_feeder.sh 120 & /var/opt/asis/scripts/asis_install.sh

TEST İŞLEMLERİ
0x510010 //MMVal cihazının test kartları ile çalışması için ayar
0x25 0000 //MMVal otobüs modu
0x25 0001 //MMVal turnike modu
0x26 //MMVal Modunu öğrenme
0x62 //ip sorma komutu
0x63 //Whiteliste versiyon sorgulama
0x39 // UID set  35010001 
0x3A // UID get
0x60 01 000007D0 //SET online timeout süresi 500 - 5000 arasında (ms cinsinden)
0x60 02 00002710 //SET turnike kart okuma timout (ms cinsinden)
0x60 03 000A0014 //SET Servis modu setup(000A-Hata Sayısı[Kontrol aralığı])*(0014-Süre sn cinsinden) 
0x61 01 //GET online timeout
0x61 02 //GET online turnike timeout
0x61 03 //GET servis mode setup
0x68 01 0001 0001 //Oluşturulan farklı kartların bizim standart kart tipleri ile eşleştirilmesi
0x69 01 0001 //1 nolu kart eşleşmesini görmek için kullanılır
MMVAL /var/opt/asis/dev_opts.ini -> dev_uid=uid //force set yada sahadaki cihaza uid vermek
KKVAL /etc/dev_opts.ini -> dev_uid=uid //force set yada sahadaki cihaza uid vermek
SKP de düşülen para miktarı gösterme

#qvalidatör uygulamasını resetleme
killall start.sh ;killall asis-watchdog ;killall asis-updater ;killall qvalidator ;/opt/asis/scripts/wd_feeder.sh 120 & /var/opt/asis/scripts/asis_install.sh

#gpslogd programını restart edip tekrar başlatma
/etc/init.d/gpslogd.sh restart ; logread -f | grep gpslogd

#MMVal Static IP verme
/etc/network/interface

#passwd //root satırında komutu yazıldığında yeni paraola isteniyor

//Pazartesi Testleri
# adım adım güncelleme testi

killall start.sh; killall qvalidator; rm -fr /mnt/media/app/data/mfruiddb; rm -fr /mnt/media/app/data/mfraliasdb; reboot //database dosyalarını silerek yeniden başlatma

#Komut ile KKVal test update işlemlerini tetikleme
echo 11008 > /mnt/media/app/current_version
cd /etc/init.d/
vi download_script.sh
ftp://10.23.20.4/update/test //olarak değiştir
./download_script.sh //9008 versiyonun indirip dosyaları extract eder ev KKVal yeniden başlar
./download_table.sh //

#İzmir Teknisyen Kart Oluşturma
Sector 1 / Master Key 1 / KeyA: A123D8497CE0

#SKP den ayar değişikliğinde oluşan kayıt tipleri ve anlamları
04 //SKP teknisyen işlemi
00 //başarılı
00 00 00 00 00 00 00 //Teknisyen kart id
08 //terminal no set
09 //server ip set
0A //server port
0B //terminal ip
0C //terminal net mask
0D //terminal getway

#İzmir Kart Tipi & Ücret Tipi Eşitleme
VP_SRV_EXT_REQ_TYPE_SET_LOCAL_CARD_TYPES= 0x68,     /// cmd (1B), count (1B), count x (local card type (2B), card type (2B))
VP_SRV_EXT_REQ_TYPE_GET_LOCAL_CARD_TYPES= 0x69,     /// cmd (1B), count (1B), count x (local card type (2B))
680700000001000100010004000200050002000600060045000E0049000F
68040067000F0069000F0096000F0098000F //ul kart eşleştirme

#Zone Liste Hat Tanımlama
SET_LINE_STOPS_IZMIR	= 0x5C,     /// cmd (1B), line id(3B), zone(1B), week id(1B), count (1B), count x { stop id(2B), type(1B) }
GET_LINE_STOPS_IZMIR	= 0x5D,     /// cmd (1B), line id(3B)
5C 000005 01 01 0A C490 01 C48E 01 C48C 01 C48A 01 C488 01 C37C 01 C37A 01 C378 01 C376 01 C374 01
5C 0186A5 01 01 0A C490 01 C48E 01 C48C 01 C48A 01 C488 01 C37C 01 C37A 01 C378 01 C376 01 C374 01
5C 000006 01 01 0A C490 01 C48E 01 C48C 01 C48A 01 C488 01 C37C 01 C37A 01 C378 01 C376 01 C374 01
5C 0186A6 01 01 0A C490 01 C48E 01 C48C 01 C48A 01 C488 01 C37C 01 C37A 01 C378 01 C376 01 C374 01
5C 000007 02 01 0A C490 02 C48E 02 C48C 02 C48A 02 C488 02 C37C 02 C37A 02 C378 02 C376 02 C374 02
5C 0186A7 02 01 0A C490 02 C48E 02 C48C 02 C48A 02 C488 02 C37C 02 C37A 02 C378 02 C376 02 C374 02
5C 000008 03 01 0A C490 03 C48E 03 C48C 03 C48A 03 C488 03 C37C 03 C37A 03 C378 03 C376 03 C374 03
5C 0186A8 03 01 0A C490 03 C48E 03 C48C 03 C48A 03 C488 03 C37C 03 C37A 03 C378 03 C376 03 C374 03

#Zone Aktarma Tanımlama
SET_TRANSFERS_ZONES	= 0x6A,     /// cmd (1B), zone id (1B), count (1B), count x {prev zone id (1B), interval (1B), percent (1B)}
GET_TRANSFERS_ZONES	= 0x6B,     /// cmd (1B), zone id (1B)
6A 01 03 01 5A 01 02 5A 02 03 5A 01
6A 02 03 01 5A 01 02 5A 01 03 5A 01
6A 03 02 01 5A 03 02 5A 03

#Emergency Komutu
REQ_TYPE_EMERGENCY_MSG	= 0x72,     /// cmd (1B), Msg Id (4B), Str Len (1B),  0x0D, Line 1 Msg, 0x0D, Line 2 Msg, ..., 0x00
72 00000001 14 0D 6B617A61206D6573616AFD206F6B756E647500
72 00000002 15 0D 6172FD7A61206D6573616AFD206F6B756E647500
72 00000003 17 0D 6C617374696B206D6573616AFD200D6F6B756E647500
72 00000004 1E 0D 4163696C20616D62756C616E73206D6573616AFD0D616CFD6E64FD2E00
72 00000005 17 0D 6173617969FE206D6573616AFD200D6F6B756E647500
72 00000006 17 0D 74726166696B206D6573616AFD200D6F6B756E647500
72 00000007 18 0D 69746661697965206D6573616AFD200D6F6B756E647500
72 00000008 1F 0D 647572616B20796FF0756E6C75F0750D6D6573616AFD206F6B756E647500

72 00000004 1E 0D 4163696C20616D62756C616E73206D6573616AFD 0D 616CFD6E64FD2E 00 //acil ambulans mesajı alındı
72 00000002 29 0D 5365727669732061726163FD20 0D 6B6F6E756D756E757A6120 0D 79F66E6C656E646972696C6469 00 //servis aracı konumunuza yönlendirildi
72 00000005 15 0D 506F6C69732079F66E6C656E646972696C6469 00 //polis yönlendirildi

VP_SRV_EXT_REQ_TYPE_SET_CARD_PREV_TRANS_RECS_NUMS   = 0x7B,     /// cmd (1B), prev payments num (1B), prev charges num (1B)
VP_SRV_EXT_REQ_TYPE_GET_CARD_PREV_TRANS_RECS_NUMS   = 0x7C,     /// cmd (1B)

7B0303

#Money Determination Table 16. sütündan sonraki sütünları doldurmak için kullanılan komut yapısı
REQ_TYPE_SET_TICKET_FARES = 0x70, /// cmd (1B), time zone id (1B), stop type (1B), fare id count (1B), count x {fare ids (1B)} 
ACK_TYPE_SET_TICKET_FARES = 0x70, /// cmd (1B), time zone id (1B), stop type (1B), count (1B)
REQ_TYPE_GET_TICKET_FARES = 0x71, /// cmd (1B), time zone id (1B), stop type (1B) 
ACK_TYPE_GET_TICKET_FARES = 0x71, /// cmd (1B), time zone id (1B), stop type (1B), count (1B), count x {fare ids (1B)}

70 00 01 10 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 7B 0E 0F
70 01 01 10 01 01 02 03 04 05 06 07 08 09 0A 0B 0C 7B 0E 0F
70 02 01 10 01 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F
70 03 01 10 01 01 02 03 04 05 06 07 08 09 0A 0B 0C 7B 0E 0F
70 04 01 10 01 01 02 03 04 05 06 07 08 09 0A 0B 7B 0D 0E 0F
70 05 01 10 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 0D 0E 0F
70 06 01 10 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 7B 0E 0F
70 07 01 10 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 7B 0E 0F
70 08 01 10 01 01 02 03 04 05 06 07 08 09 0A 0B 7B 7B 0E 0F
70 09 01 10 01 01 02 03 04 05 06 07 08 09 0A 0B 7B 0D 0E 0F
70 0A 01 10 01 01 02 03 04 05 06 07 08 09 0A 0B 7B 0D 0E 0F
70 0B 01 10 01 01 02 03 04 05 06 07 08 09 0A 0B 7B 0D 0E 0F
70 0C 01 10 01 01 02 03 04 05 06 07 08 09 0A 0B 7B 0D 0E 0F
70 0D 01 10 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 0D 0E 0F
70 0E 01 10 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 7B 0E 0F
70 0F 01 10 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 7B 0E 0F
70 10 01 10 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 0D 0E 0F
70 11 01 10 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 0D 0E 0F
70 12 01 10 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 0D 0E 0F
70 13 01 10 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 7B 0E 0F
70 14 01 10 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 7B 0E 0F


70 00 06 0F 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 7B 0E 0F
70 01 06 0F 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 7B 0E 0F
70 02 06 0F 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 7B 0E 0F
70 03 06 0F 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 7B 0E 0F
70 04 06 0F 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 7B 0E 0F
70 05 06 0F 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 7B 0E 0F
70 06 06 0F 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 7B 0E 0F
70 07 06 0F 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 0D 0E 0F
70 08 06 0F 01 01 02 03 04 05 06 07 08 09 0A 0B 7B 0D 0E 0F
70 09 06 0F 01 01 02 03 04 05 06 07 08 09 0A 0B 7B 0D 0E 0F
70 0A 06 0F 01 01 02 03 04 05 06 07 08 09 0A 0B 7B 0D 0E 0F
70 0B 06 0F 01 01 02 03 04 05 06 07 08 09 0A 0B 7B 0D 0E 0F
70 0C 06 0F 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 0D 0E 0F
70 0D 06 0F 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 0D 0E 0F
70 0E 06 0F 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 0D 0E 0F

70 00 07 0F 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 7B 0E 0F
70 01 07 0F 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 7B 0E 0F
70 02 07 0F 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 7B 0E 0F
70 03 07 0F 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 7B 0E 0F
70 04 07 0F 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 7B 0E 0F
70 05 07 0F 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 7B 0E 0F
70 06 07 0F 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 7B 0E 0F
70 07 07 0F 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 7B 0E 0F
70 08 07 0F 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 7B 0E 0F
70 09 07 0F 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 7B 0E 0F
70 0A 07 0F 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 7B 0E 0F
70 0B 07 0F 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 7B 0E 0F
70 0C 07 0F 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 7B 0E 0F
70 0D 07 0F 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 7B 0E 0F
70 0E 07 0F 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 0D 0E 0F
70 0F 07 0F 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 0D 0E 0F
70 10 07 0F 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 0D 0E 0F
70 11 07 0F 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 0D 0E 0F
70 12 07 0F 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 0D 0E 0F
70 13 07 0F 01 01 02 7B 04 05 06 07 08 09 0A 0B 7B 0D 0E 0F


#Time SLC Day 16. sütündan sonraki sütünları doldurmak için kullanılan komut yapısı
REQ_TYPE_SET_DAILY_TIME_TABLE = 0x81, /// cmd (1B), day table id (1B), count (1B), time points(count x 2B) 
ACK_TYPE_SET_DAILY_TIME_TABLE = 0x81, /// cmd (1B), day table id (1B), count (1B)
REQ_TYPE_GET_DAILY_TIME_TABLE = 0x82, /// cmd (1B), day table id (1B) 
ACK_TYPE_GET_DAILY_TIME_TABLE = 0x82, /// cmd (1B), day table id (1B), count (1B), time points(count x 2B)

81 01 07 0000 0700 0A00 1000 1300 1400 1600 173B
81 06 0E 0000 0000 0000 0000 0000 0000 0000 0001 0700 0A00 1000 1300 1400 1600 1719
81 07 13 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0001 0A00 1000 1300 1600

#Validator Flagları
VP_OFF_TRANS_FLAG_TEST          = 0,
VP_OFF_TRANS_FLAG_TRANSFER      = 1,
VP_OFF_TRANS_FLAG_DU_DECIDED 	= 2,
VP_OFF_TRANS_FLAG_SUBSCRIPTION 	= 3,
VP_OFF_TRANS_FLAG_EXPIRED_CARD  = 4,
VP_OFF_TRANS_FLAG_SAME_CARD     = 5,
VP_OFF_TRANS_FLAG_FREE_TRIP     = 6,
VP_OFF_TRANS_FLAG_CHARGE        = 7

800000010000400000000000000000C1

#Test Kart ID
4D2ECACE00000004
0D30CACE00000004
0DE4C9CE00000041
3DE2C9CE00000041
9D40CACE00000042
BD3DCACE00000043
0DE5C9CE00000041
4DE2C9CE00000041
CD3ECACE00000041
CD3DCACE00000041
1DE4C9CE00000042
DCBF948800000043



