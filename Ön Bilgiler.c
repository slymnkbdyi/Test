
***KART GÖRÜNTÜLEME MODUNA GEÇÝÞ:9701
   NORMAL MODA GEÇÝÞ : 9700




{<--SD KART HAZIRLAMA-->
fat sd card update adýmlarý:
$ cd ~/imx53/rootfs
#$ ln -s rootfs_v1.0.1.15_20140120.jffs2 rootfs.jffs2
$ cp rootfs_v1.0.1.15_20140120.jffs2 rootfs.jffs2
$ crc16 rootfs.jffs2
$ cp rootfs.jffs2 /media/<sd card>/dimod53/fw_update/
$ sync; sync
$ crc16 /media/<sd card>/dimod53/fw_update/rootfs.jffs2
# update rootfs_crc16 value in "/media/<sd card>/dimod53/fw_update/fw_update.ini"

production sd card update adýmlarý:
$ gksudo nautilus & //production sd kartýnýn içindeki dosyalara tam eriþim için kullanýlýr
$ cd ~/imx53/rootfs
$ cp rootfs_v1.0.1.15_20140120.jffs2 rootfs.jffs2
}
{<--PUTY KOMUTLARI-->
run bootcmd_mmc //Ýþletim sistemini nand flasha sd den yüklemek için
root{p=neden} //çalýþan sisteme girip komut uygulayabilmek için
killall ds0 //ds0 uygulamasýný durdurur.
cp /mnt/sd-mmcblk0p1/ds0 /home/user/bin/ //sd kartýn içindeki dosyayý nantta belirtilen dizine kopyalar
cd /user/.../dashboard/ //klasöre girmek için kullanýlýr
./ds0 //uygulamanýn bulunduðu klasörden programý çalýþtýrmak için kullanýlýr
cat /usr/dtsis/updates/current_ver.txt //Cihaz versiyon öðrenme
echo 'v1.0.2.36' /usr/dtsis/updates/current_ver.txt //cihaz vrsiyon numarasýný deðiþtirme.
ll -h //klasör içeriðini listelemek için kullanýlýr. -h dosyalarýn büyüklüðünü MB cinsinden veriri.
cd /etc/dtsis/ //cihazý test moduna almak için bu klasördeki mx53_hub3g_v1.conf dosyasý kullanýlýr.
MH_DBG_LOG=1 /home/user/bin/modem_handler & //modemhandler loglarýný açmak için kullanýlýr.
ps //çalýþan uygulamalarý ve idlerini gösterir.
/etc/dtsis/init.d$ chmod +x 01watchdog//01watchdog dosyasýna çalýþabilme izni vermek için
cd /proc/PIDno/fd$ ls -l | wc -l//uygulamanýn içinde kaç dosya çalýþtýðýný gösterir.
tail /var/log/messages //resetleme loglarýna bakmak için kullanýlýr.
/etc/dtsis/common/lpc_periph_pwr_ctrl.sh
date +%T -s "01:58:55"

date 2014.06.22-09:21:30
hwclock -w -f /dev/rtc1

{LOG KOMUTLARI
tail -50 /var/log/messages //son elli kaydý gösterir
less /var/log/messages //END tuþu ile sayfa sayfa loglara bakýlýr. q ile çýkýlýr
cat /var/log/messages //bütün loglarý ekranda döker
more /var/log/messages}

{vi mx53_hub3g_v1.conf //dosyanýn içeriðini deðiþtirmek için kullanýlýr. // uygulanan ayarlarýn etkin olabilmesi için cihaz yeniden baþlatýlmalýdýr.
	i	- düzenleme moduna almak için kullanýlýr 
	esc	- düzenleme modundan çýkmak için kullanýlýr
	:w	- yapýlan deðiþikliklerin kaydedilmesi için kullanýlýr
	:q!	- deðiþiklik yapmadan vi'den çýkmak için kullanýlýr
	:q	- vi'den çýkmak için kullanýlýr
}

echo 3\n > /proc/sys/vm/drop_caches //yavaþ oynayan videoda denenecek
cat /proc/meminfo; echo 3\n > /proc/sys/vm/drop_caches; sleep 2; cat /proc/meminfo

ststic ip 5.11.141.201

{IMX95 KOMUTLARI
rm -f /cfg/main/dplayer_nvvars.ini
}

{DVR KOMUTLARI
date -s '00:00:00 20140101' //system saatini ayarlamak için kullanýlýr
hwclock --systohc //system saatini rtc ye yazmak için kullanýlýr
echo 1009 > /dvr/updater/current_version
cd /dvr/updater/download
mcedit /etc/init.d/gprslog.sh //DVR4 cihazlarýnýn baðlanacaðý ip adresini deðiþtirmek için kullanýlýr
/etc/ppp/peers/Chat-Module-UC20-connect //baðlantý þeklini deðiþtirmek için kullanýlýr "mgb-mgbs"
/dvr/gpslogd/data //DVR cihazýnýn gönderemediði gps kayýtlarýnýn depolandýðý yer
du -h --max-depth=1 //Klasörlerin nekadar yer kapladýðýný görmek için kullanýlýr

{DVR4_PT2_1_HDD_Formatlama
cd /dvr/uimain
dvr_kill.sh
prep-hdd.sh
basket_manager
1
reboot}
}
{Örnek Raw komutu açýklamalarý
AA //Paket Baþlýðý
26 00 //Paket Uzunluðu
13 //Komut
02 //Komut Tipi
FF FF FF FF //Busline ID
FF FF FF FF //Station ID
75 DF C0 54 //Date Time
57 08 AB B1 C4 B5 AF 40 //Latitude
12 A3 E7 16 CA 36 A6 40 //Logitude
01 //Fix
09 //Uydu Sayýsý
07 //Hýz
06 00 //Açý
49 00 //Yükseklik
01 //Kontak Bilgisi
2F 18 //CRC}
}
{<--FTP GÜNCELLEME DOSYALRININ YAPILMASI-->
#linux ortamýnda /imx53/rootfs/ klasöründe aþaðýdaki iþlemlerin yapýlmasý gerekmektedir.
/imx53/rootfs$ tar -cjvf hub3g_v1.0.1.9.tar.bz2 home/user/bin/ds0 //tar.bz2 dosyasý oluþturuldu. ds0 dosyasý mutlaka /imx53/rootfs/home/user/bin$ klasöründe bulunmalýdýr.
/imx53/rootfs$ md5sum hub3g_v1.0.1.9.tar.bz2 > hub3g_v1.0.1.9.tar.bz2.md5 //md5 dosyasý oluþturuldu
/imx53/rootfs$ echo "v1.0.1.9" > updates.txt //updates.txt dosyasý oluþturuldu. FTP'ye kopyalama iþleminde ilk önce tar.bz2 ve md5 dosyalarý kopyalanýp ardýndan updates.txt dosyasýnýn kopyalanmasý gerekmektedir.
{
tar -cjvf hub3g_v1.0.0.1.tar.bz2 etc/dtsis/mmval_v5.conf \ -> 
md5sum hub3g_v1.0.0.1.tar.bz2 > hub3g_v1.0.0.1.tar.bz2.md5 ->
echo "v1.0.1.8" > updates.txt ->

ftp update çalýþmalarýndan.
ltib ile bzip2 ilave ettim.
hub3g_v1.0.0.0.tar.bz2 create iþlemleri:
archive dosyasýnýn için path ta girmesi için root ta sýkýþtýrma iþlemi yapýlmasý gerekiyor.
/$ tar -cvjf hub3g_v1.0.0.0.tar.bz2 /etc/dtsis/mmval_v5.conf

ftp update örnekler adýmlar:
$   etc/dtsis/mmval_v5.conf \
 var/dtsis/updates/pre_update.sh \
 var/dtsis/updates/post_update.sh
$ md5sum hub3g_v1.0.0.1.tar.bz2 > hub3g_v1.0.0.1.tar.bz2.md5
$ echo "v1.0.0.1" > updates.txt

upload to "ftp.dtsis.com"
user: imx53@dtsis.com
pass: dimod53.
path: /hub3g/common
files:  hub3g_v1.0.0.1.tar.bz2
 hub3g_v1.0.0.1.tar.bz2.md5
 updates.txt
 }
}

{<--DIMOD53 U-BOOT KOMUTLARI-->
printenv //cihaz çevresel ayarlarýný gösterir
setenv ipaddr '192.168.0.80' //cihazýn ip adresini deðiþtirmek için kullanýlýr
setenv ethaddr '00:00:00:00:31:55' //cihaz mac adresini deðiþtirmek için kullanýlýr.
saveenv //yapýlan deðiþikliklerin geçerli olmasý için kullanýlýr
setenv rootfs_ver_major //var olan root dosyasýný siler
setenv kernel_ver_major //var olan kernel dosyalarýný siler
run bootcmd_auto_board //SD karttan dosyalarýn tekrar yüklenmesi için klullanýlan komut
}

{<--FTP BÝLGÝLERÝ-->
#Cihazýn baðlandýðý FTP Adresi
ftp.dtsis.com
imx53@dtsis.com
dimod53.

#FTP ile HUB3G katýna eriþme
ftpuser_media
dimod53_media
}

{<--MAIN CONFÝG ADRESI-->
/mnt/sd-mmcblk0p1/dashboard
/home/user/dashboard
}

{<--SMS KOMUTLARI-->
	{"Uygulama"
		DSHOST:85.105.196.74;DSPORT:30156 ->Uygulamanýn baðlanacaðý ip portu ayarlamak için kullanýlýr.}
	{"Modem Handler"
		mh reboot //cihazý yeniden baþlatmak için kullanýlýr. 
		mh reboot f //zorla yeniden baþlatmak için kullanýlýr.
		mh set serverip 85.105.196.74:57800 //modemin baðlanacaðý server ip portunu set etmek için kullanýlýr.
		mh set deviceid 0x15 //hexadesimal olarak cihaza id vermek için kullanýlýr.
		mh set pppdprofile tcell_3g //3g baðlantý için kullanýlacak profili belirlemek için kullanýlýr.
		mh get ip //cihazýn 3g ip adresini öðrenmek için kullanýlýr.
		mh set apn asis_s mgbs //yeni profil ismi oluþturmak için kullanýlýr. Apn ayarlarý da profil isiminin içinde bulunur.
		mh set cfg 85.105.196.74:50150,0x01,3gs mgbs user pass 1 //bütün ayarlarý tek seferde yapmak için kullanýlýr. v1.0.2.35'ten itibaren
		}
mh set apn data internet gprs gprs
mh set pppdprofile data
mh set serverip 213.144.99.143:33302
mh set deviceid 0x04
DSHOST:85.105.198.82;DSPORT:39901
}

Excel Formül
=(((A2/60)/60)/24)+TARÝH(1970;1;1) //Unix formatýný normal tarih zamana çevirme

{DÝYARBAKIR
killall ds0_deamon.sh; \
killall ds0; \
umount /dev/mmcblk0p1; \
rm -f /home/user/dashboard/images/1.png; \
rm -f /home/user/dashboard/images/2.png; \
rm -f /home/user/dashboard/images/1kurdi.png; \
rm -f /home/user/dashboard/images/1tr.png; \
rm -f /home/user/dashboard/images/2kurdi.png; \
rm -f /home/user/dashboard/images/2tr.png; \
rm -f /home/user/dashboard/images/3kurdi.png; \
rm -f /home/user/dashboard/images/3tr.png; \
rm -f /home/user/dashboard/images/4kurdi.png; \
rm -f /home/user/dashboard/images/4tr.png; \
rm -f /home/user/dashboard/images/5kurdi.png; \
rm -f /home/user/dashboard/images/5tr.png; \
rm -f /home/user/dashboard/images/6kurdi.png; \
rm -f /home/user/dashboard/images/6tr.png; \
rm -f /home/user/dashboard/images/amed.png; \
rm -f /home/user/dashboard/images/bus.png; \
rm -f /home/user/dashboard/images/unesco.png; \
rm -f /home/user/dashboard/images/unesco1.png; \
rm -f /home/user/dashboard/images/unesco3.png; \
rm -f /home/user/dashboard/images/cizre_kurdi.png; \
rm -f /home/user/dashboard/images/cizre_tr.png; \
rm -f /home/user/dashboard/images/k1.png; \
rm -f /home/user/dashboard/images/kurban_bagis.png; \
rm -f /home/user/dashboard/images/t2.png; \
rm -f /home/user/dashboard/images/z3.png; \
rm -f /home/user/dashboard/videos/1.m4v; \
rm -f /home/user/dashboard/videos/1221.m4v; \
rm -f /home/user/dashboard/videos/Filmim.mp4; \
rm -f /home/user/dashboard/videos/yilbasi.wmv; \
rm -f /home/user/dashboard/videos/temizlik.m4v; \
rm -f /home/user/dashboard/videos/ playlist.xml; \
rm -f /etc/dtsis/production/file50MB.bin; \
rm -f /etc/dtsis/production/file50MB.md5; \
cd /; \
rm yilbasi.wmv ; \
rm *.png; \
rm *.m4v
rm *.xml ; \
rm *.mp4 ; \
rm ds.skin ; \
rm -r /mnt/sd-mmcblk0p1; \
rm -r /media/sd-mmcblk0p1; \
rm -r /mnt/sd-mmcblk1p1; \
rm -r /media/sd-mmcblk1p1; \
rm -r /usr/local/Trolltech/Qt4-mx5x-x11/examples; \
rm -r /usr/local/Trolltech/Qt4-mx5x-x11/demos; \
df
}

{ERZURUM
killall ds0_deamon.sh; \
killall ds0; \
umount /dev/mmcblk0p1; \
rm -f /home/user/dashboard/videos/ayhanpark.m4v; \
rm -f /home/user/dashboard/videos/K*.*; \
rm -f /home/user/dashboard/videos/K*.*; \
rm -f /home/user/dashboard/videos/P*.*; \
rm -f /home/user/dashboard/videos/d*.*; \
rm -f /home/user/dashboard/videos/giyim11.m4v; \
rm -f /home/user/dashboard/videos/verdace1106.m4v; \
rm -f /home/user/dashboard/videos/musta.m4v; \
rm -f /home/user/dashboard/videos/sadakat.m4v; \
rm -f /home/user/dashboard/videos/ayhanpark2.m4v; \
rm -f /home/user/dashboard/videos/Ak1.m4v; \
rm -f /home/user/dashboard/videos/Ak2.m4v; \
rm -f /home/user/dashboard/videos/guvendik.m4v; \
rm -f /home/user/dashboard/videos/armoni.m4v; \
rm -f /home/user/dashboard/videos/armoni2.m4v; \
rm -f /home/user/dashboard/videos/bayramalisverisi.m4v; \
rm -f /home/user/dashboard/videos/muammer.m4v; \
rm -f /home/user/dashboard/videos/muammer2.m4v; \
rm -f /home/user/dashboard/videos/oruc.mp4; \
rm -f /home/user/dashboard/videos/AVEA3010.m4v; \
rm -f /home/user/dashboard/videos/AVEA_24_10_2015.m4v; \
rm -f /home/user/dashboard/videos/AVEA_30_10_2015.m4v; \
rm -f /home/user/dashboard/videos/avea.mp4; \
rm -f /home/user/dashboard/videos/fuzul1_mout.mp4; \
rm -f /home/user/dashboard/videos/pardesu_sarayi.mp4; \
rm -f /home/user/dashboard/videos/degisim.m4v; \
rm -f /home/user/dashboard/videos/dukkan.mp4; \
rm -f /home/user/dashboard/videos/kar.m4v; \
rm -f /home/user/dashboard/videos/kiralikev.mp4; \
rm -f /home/user/dashboard/videos/magaza.mp4; \
rm -f /home/user/dashboard/videos/spor.m4v; \
rm -f /home/user/dashboard/videos/tanitim.m4v; \
rm -f /home/user/dashboard/videos/winter.m4v; \
rm -f /home/user/dashboard/videos/2008Pardesu.m4v; \
rm -f /home/user/dashboard/videos/AdresKafeson.mp4; \
rm -f /home/user/dashboard/videos/Dumlu_Yeni.mp4; \
rm -f /home/user/dashboard/videos/PardesuSarayi.mp4; \
rm -f /home/user/dashboard/videos/Verdace_giyim1.mp4; \
rm -f /home/user/dashboard/videos/mobilya_festivali.mp4; \
rm -f /home/user/dashboard/videos/mobilya_festivali2.m4v; \
rm -f /home/user/dashboard/videos/Kardelen.mp4; \
rm -f /home/user/dashboard/videos/Verdace.m4v; \
rm -f /home/user/dashboard/videos/Verdace2.m4v; \
rm -f /home/user/dashboard/videos/Verdace3.m4v; \
rm -f /home/user/dashboard/videos/akParti.mp4; \
rm -f /home/user/dashboard/videos/akparti2.mp4; \
rm -f /home/user/dashboard/videos/dumlu-2.m4v; \
rm -f /home/user/dashboard/videos/dumlu2.m4v; \
rm -f /home/user/dashboard/videos/gfest13052015.m4v; \
rm -f /home/user/dashboard/videos/giyimFestivali.m4v; \
rm -f /home/user/dashboard/videos/kardelenmedya.mp4; \
rm -f /home/user/dashboard/videos/kitapevi.m4v; \
rm -f /home/user/dashboard/videos/ozgurMobilya.m4v; \
rm -f /home/user/dashboard/videos/pardesusarayi.m4v; \
rm -f /home/user/dashboard/videos/termaltesis.m4v; \
rm -f /home/user/dashboard/images/D*.*; \
rm -f /home/user/dashboard/images/b*.*; \
rm -f /home/user/dashboard/images/d*.*; \
rm -f /home/user/dashboard/images/l*.*; \
rm -f /home/user/dashboard/images/h*.*; \
rm -f /home/user/dashboard/images/r*.*; \
rm -f /home/user/dashboard/images/t*.*; \
rm -f /home/user/dashboard/images/K*.*; \
rm -f /home/user/dashboard/images/U*.*; \
rm -f /home/user/dashboard/images/k*.*; \
rm -f /home/user/dashboard/images/ailedoktoru.png; \
rm -f /home/user/dashboard/images/23.png; \
rm -f /home/user/dashboard/images/samiyusuf.png; \
rm -f /home/user/dashboard/images/Bayram_Kardelen.png; \
rm -f /home/user/dashboard/images/guvendikbayram.png; \
rm -f /home/user/dashboard/images/ucretsiz.png; \
rm -f /home/user/dashboard/images/secimduy.png; \
rm -f /home/user/dashboard/images/yazsporokul.png; \
rm -f /home/user/dashboard/images/GUVENDIK_PASABAHCE.png; \
rm -f /home/user/dashboard/images/TABYALAR_2.png; \
rm -f /home/user/dashboard/images/TABYALAR_3.png; \
rm -f /home/user/dashboard/images/TABYALAR_4.png; \
rm -f /home/user/dashboard/images/muhasebe_kursu1.png; \
rm -f /home/user/dashboard/images/once_egitim.png; \
rm -f /home/user/dashboard/images/1.png; \
rm -f /home/user/dashboard/images/11.png; \
rm -f /home/user/dashboard/images/22.png; \
rm -f /home/user/dashboard/images/233.png; \
rm -f /home/user/dashboard/images/33.png; \
rm -f /home/user/dashboard/images/44.png; \
rm -f /home/user/dashboard/images/55.png; \
rm -f /home/user/dashboard/images/66.png; \
rm -f /home/user/dashboard/images/77.png; \
rm -f /home/user/dashboard/images/88.png; \
rm -f /home/user/dashboard/images/Mirac.png; \
rm -f /home/user/dashboard/images/OHO.png; \
rm -f /home/user/dashboard/images/cermikfestivali.png; \
rm -f /home/user/dashboard/images/ekmek.png; \
rm -f /home/user/dashboard/images/engellilergunu.png; \
rm -f /home/user/dashboard/images/onmuhasebe.png; \
rm -f /home/user/dashboard/images/2008guvendik.png; \
rm -f /home/user/dashboard/images/B6.png; \
rm -f /home/user/dashboard/images/Erzurum_Fuar.png; \
rm -f /home/user/dashboard/images/K5.png; \
rm -f /home/user/dashboard/images/Kurban_Belediye.png; \
rm -f /home/user/dashboard/images/buyuksehirduyuru.png; \
rm -f /home/user/dashboard/images/didiguvendik.png; \
rm -f /home/user/dashboard/images/duyuru_son.png; \
rm -f /home/user/dashboard/images/er1.png; \
rm -f /home/user/dashboard/images/er2.png; \
rm -f /home/user/dashboard/images/esmek.png; \
rm -f /home/user/dashboard/images/fairguvendik.png; \
rm -f /home/user/dashboard/images/guvendik_abc.png; \
rm -f /home/user/dashboard/images/guvendik_abc1.png; \
rm -f /home/user/dashboard/images/guvendik_finish.png; \
rm -f /home/user/dashboard/images/guvendik_hobby.png; \
rm -f /home/user/dashboard/images/guvendik_hobby1.png; \
rm -f /home/user/dashboard/images/guvendik_vix.png; \
rm -f /home/user/dashboard/images/guvenlik_sut.png; \
rm -f /home/user/dashboard/images/ledkurban.png; \
rm -f /home/user/dashboard/images/muhasebe_kursu.png; \
rm -f /home/user/dashboard/images/reklam_kardelenkart.png; \
rm -f /home/user/dashboard/images/ucretler.png; \
rm -f /home/user/dashboard/images/18mart.png; \
rm -f /home/user/dashboard/images/canakkale1.png; \
rm -f /home/user/dashboard/images/canakkale2.png; \
rm -f /home/user/dashboard/images/duyuruyeni.png; \
rm -f /home/user/dashboard/images/eleman.png; \
rm -f /home/user/dashboard/images/erzurum_kurtulus.png; \
rm -f /home/user/dashboard/images/erzurum_spor_oyunlari.png; \
rm -f /home/user/dashboard/images/halkekmek.png; \
rm -f /home/user/dashboard/images/ilann.png; \
rm -f /home/user/dashboard/images/reklam.png; \
rm -f /home/user/dashboard/images/renault.png; \
rm -f /home/user/dashboard/images/tiyatro1.png; \
rm -f /home/user/dashboard/images/tiyatro2.png; \
rm -f /etc/dtsis/production/file50MB.bin; \
rm -f /etc/dtsis/production/file50MB.md5; \
cd /; \
rm *.wmv ; \
rm *.png; \
rm *.m4v
rm *.xml ; \
rm *.mp4 ; \
rm ds.skin ; \
rm -r /mnt/sd-mmcblk0p1; \
rm -r /media/sd-mmcblk0p1; \
rm -r /mnt/sd-mmcblk1p1; \
rm -r /media/sd-mmcblk1p1; \
rm -r /usr/local/Trolltech/Qt4-mx5x-x11/examples; \
rm -r /usr/local/Trolltech/Qt4-mx5x-x11/demos; \
df
}
