//QT yükleme 

Install Qt

sudo apt-get install build-essential
sudo apt-get install qtcreator
sudo apt-get install qt5-default







#Bin : 
  Sistemi açılışı kontrolü komutların bulundugu dizindir ..mesela pwd,date buradadır
#Dev : 
Cihazlar a ait dosya burada bulunur silinirse /dev/MAKEDEv tekrar olustrur bu dosyaları 
#Etc: 
 Sistem Yapılandırma Dosyaları Bulunur Burada 

     Skel: Buradaki dosyalar kullanıcı hesabı aclınca oraya kopyalanır bunlar 
     motd: Kullanıcı Sisteme Grince Basılacak Mesaj Burada Bulunur .her başarılı girşten sonra görüntülenecek mesaj burada yer alır 
     Passwd: Kullanıcı Veritabanı 
     shadow: Şifrelenmiş passwordler burada bulunur sadece rootlar okur
     fstab: Linux Acılırken bindirilecek dosyalar burada bulunur
     isssue : Genelde Açılış ve Hoşgeldin Mesajları bulunur 
     magic : Hangi tür dosya biçeminin neye göre saptanacagı burada yer alır 
         
#Lib : 


Kütüphane dosyaları olur

#mnt : 
  
  Gecici olarak mount edilen dosya sistemleri vardır 

#Proc:

 Sürec Knotrollerini Bilgilerini Tutar Yer Kaplamaz 

   cpu:işlemci bilgileri   devices:Halihazrıda calısan cihazları   filesystems:hali hazırda calısacak dosya sitemlerini
   kcore:sistemin hafıza görüntüsünü tutar
   uptime:sistemin açık kaldığı süreyi verir 
   version : Çekirdek sürümün verir 




#Root:


 sistem Görevlsi ev dizini

#Tmp :


Gecici Dosyların Bulundugu Dizin 
     Bu tmp nini içinin temzielnmesini saglayan servis Cron ,At servisleridir   .At servisinin Crondan Farkı Sadece Bir kere Çalıştırılabilir
#Usr: 


 Diger Önemli sistem doslayalarını tutar.en kalabalık dizindir .Yeni kurulan tüm programlar buraya konulur

    doc,lib,man,src gibi kaynak dosya ve dokumanlar buradadır

#Var: 




Sürekil deügşen sistem bilgileri burada tutulur

    adm :Admin bilgileri     Preserve:Sistem göcmesi sonrası kaybolması muhtemel dosylar 
        

		
		
		
#Media:


Kaldırılabilir Aygıtlar 


#Opt : 





 İşletim sisteminden bağımsız, sistem için zorunlu olmayan 3. parti kullanıcı programları bu dizinde bulunur. 
       Örneğin; Google Earth programını indirip kurmak istediğinizde, 'default' olarak kurulacağı nokta, /opt/google-earth adresidir. 


#İnit :



  Açılışta ilk başlayan ve ön yükleme sonrasındason kapanan servistir.İlk gelen son giden inittir  	

     /etc/inittab: Açılışta Hangi Kipin Çalışacagı burada bulunur

	

#Mail :   



 Mailler Genel 	/var/spool/mail Altında Saklanır




Shutdown -h now  :kapatma    (reboot ile aynı )
shutdown -r now  :sistemi tekrar başaltır 
shutdown –h now+60 : 60 dk. Sonra sistemi kapatır.

shutdown -h 11:50   : 11:50 de kapanması saglanır 

shutdown -r now " Kapanıyor "   :   Kapatılır ve KAPANIYOR mesajı görüntülenir 

uptime : Ne kadar Süredir Açık Olduğunu Gösterir 


!!! nano, joe, mcedit gibi metin düzenleyicileri de kullanabilirsiniz, ancak vim ile UTF-8 kodlu metinleri de düzenleyebilirsiniz. Diğerleri bunu yapamaz.


**Cihaz Sürekli resetleniyorsa    versiyonunu ileri almalıyız 



 /opt/app/bin/val-config --ver 20170101010101

 
 
 ** Flashı mount etme 
 

 sudo fdisk -l
2. Create a mount point
sudo  mkdir /media/usb
3. Mount!
sudo mount /dev/sdb1 /media/usb
 


#Alias:



 Komuta baska bir isim ver


init 0: Sistemi kapat ( bknz. halt shutdown poweroff)      ///  poweroff: Sistemi kapat (bknz. init 0)
init 1: Sistemi tek kullanicili modus'a gecir (bknz. init S init s)
init 2: Sistemi lokal cok kullanicili modus'a gecir
init 3: Sistemi tam aga bagli sekilde ve cok kullanicili modus'a gecir
init 5: Sistemi tam aga bagli sekilde cok kullancili ve GUI'li modus'a gecir
init 6: Sistemi yeniden baslat


#reset:



 Shell ayarlarini eski ayarlara getir


ps aux > process : process bilgisini process isimli dosyaya yazar.



ps au : tüm kullanıcıları ve processleri gösterir.
ps u : kullanıcı processlerini gösterir.
ps aux : uykuda olan ve çalışan processleri gösterir.



killall firefox :  firefox’la ilgili çalışan bütün servisleri hemen kapatır.
pkill firefox :  firefox’u hemen kapatır.


$ sudo tail messagesà messages dosyasındaki son 10 satırı gösterir.




History: Kullanicini o zamana kadar kullandigi komutlari göster


# date  -s "21-01-2016 12:30:00"

$mount /dev/sdc1 : sdc1 diskini mount eder.    
Örn : Elimizde bir iso imajı var biz bunu sisteme bağlamak istiyoruz.
$mount –t iso9660 debian.iso /mnt/iso : iso dosyasını mnt altına mount ettik.


/etc/init.d/ servisler bu dizin altında çalışır. Çalışan hizmet rsyslog
#etc/init.d/rsyslog start : servisi çalıştırır.
#etc/init.d/rsyslog stop : servisi durdurur.
#/etc/rsyslog.conf : Konfigurasyon dosyasıdır
/var/log/ : system kayıtlarının bulunduğu dizin.




	

ls -la /home | grep netinternet
Yukarıda yer alan komut /home dizininde içeriğinde netinternet geçen dosya ve klasörleri süzer.
ps aux | grep -v httpd
Yukarıdaki komut ps aux çıktısında içeriğinde httpd olan satırları ekrana basmadan diğer tüm sonuçları gösterir.




 
 
 /*  Komutlar */

*cat /proc/cpuinfo                  # CPU model
*exit                               # Go back to multi-user mode
*clean                              #Clean editor
*# hostname -i            //hostun IP adresini verir

*  İNİT 

0       Shutdown and halt
1       Single-User mode (also S)
2       Multi-user without network
3       Multi-user with network
5       Multi-user with X
6       Reboot

0       Halt and turn the power off (signal USR2)
1       Go to single-user mode (signal TERM)
6       Reboot the machine (signal INT)
c       Block further logins (signal TSTP)
q       Rescan the ttys(5) file (signal HUP)

*  ifconfig eth0 hw ether 00:01:02:03:04:05     Change MAC address 

*RARLAMA  ve ZİPLEME



C   oluşstur 
f   hangi dosyaya kaydedilecegi
x   extract et 







# tar -cf home.tar home/        # archive the whole /home directory (c for create)      // c dizinin altındaki herseyi paketle    f ise  /home dizinine yazması icin 
# tar -czf home.tgz home/       # same with zip compression
# tar -cjf home.tbz home/       # same with bzip2 compression
   
   
 $ tar -rf arsiv.tar ekleme.txt                                                    // bir arşive arşivi acmadan dosya ilave etmek için arsiv.tar a  ekleme.txt eklendi 
 
   
   
# zip -r fileName.zip /path/to/dir                    # zip dir into file fileName.zip
# unzip fileName.zip                                  # uncompress zip file

    Dosyayı Açma
	
# tar -tzf home.tgz             # look inside the archive without extracting (list)
# tar -xf home.tar              # extract the archive here (x for extract)
# tar -xzf home.tgz             # same with zip compression (-xjf for bzip2 compression)






*# which command                      # Show full path name of command

	
*? tek bir karakter yerine geçer. Örneğin ?? adı iki karakterden oluşan bütün dosyalar anlamına gelir.
*[] karakterleri arasında yazılan liste içindeki herhangi bir harfe dönüştürülür. Örneğin cp *[abc] /tmp komutu `a', `b' ya da `c' ile biten bütün dosyaları /tmp dizinine kopyalayacaktır. 
liste içinde aralarına `-' işareti koyarak aralıklar verebilirsiniz. Örneğin, [A-Z]* büyük harfle başlayan bütün dosyalar anlamına gelir. 
Liste içindeki `^' karakteri sonrasında belirtilen liste dışındaki bütün karakterler anlamına gelir. Örneğin *[^0-9]* adında rakam olmayan herhangi bir dosya anlamına gelecektir.


*rm komutunu -i parametresi ile birlikte kullanın, bu sayede Linux, dosyayı silmeden önce kullanıcının da onayını alır.

*Bir dizin, boş iken rmdir komutu ile silinebilir, eğer boş değilse bu komut işe yaramaz. Onun yerine rm komutunu -r parametresiyle kullanın.
*rm -rf linux/          (linux dizinini icindekilerle birlikte silinir)
 
 
 //KABUK İŞLEMLERİ
 *O an hangi kabuk üzerinde yeraldığınızı öğrenmek için   echo $SHELL   yazın.
 *Kabuk programları genellikle /bin dizini altında yeralır
 *Kullanıcının sisteme girerken hangi kabuğu kullanacağı /etc/passwd dosyasında yeralır.
 yönlendirme için üzerine yazdırmayaya ">>" kullanılır..  echo BTSIS >>a.txt       //a.txt dosyasının içine üzerine kaldıgı yerden BTSIS yazıldı   EGER TEK > olsa idi dosyanın içini siler sadece BTSIS yazardı
 
 *Bir komutu "arkaplanda " çalıştırmak için, komutun sonuna & karakteri getirin. Komutu girdikten sonra tekrar kabuk istemcisine düşecek ve kaldığınız yerden devam edebileceksiniz. 
 
 
 ** ARİTMETİK İŞLEM      let komutu kullanılır
 
 let "degisken=aritmetik islem"
 
 

 Bu örnekte iki sayı çarpılıp çıkan sonuç başka bir değişkene yazılıyor.
$ let "carpim=2*7"
$ echo $carpim


" test "  ten sonra seçenekler ve/veya karşılaştırılacak olan değerler yazılır.



komut başarılı olarak işletilmişse 0, değilse 1'dir. 
Son çalıştırılan tüm Linux komutlarının çıkış değeri $? değişkeninde tutulur

$ sayi=4
$ test $sayi -eq 4
$ echo $?
0



 "-lt" seçeneği ilk girilen aritmetik değişkenin ikinci değerden küçük olup olmadığını denetler
 
 $ sayi=4
$ test $sayi -eq 4
$ echo $?
0
$ test $sayi -lt 2
$ echo $?
1







//Vİ KULLANIMI


j, imleci bir satır aşağı indir
k, imleci bir satır yukarı gönder
h, imleci bir karakter sola al
l, imleci bir karakter sağa al



// NET,AĞ 


İnternet bağlantısı için sadece iki dosyaya gerek duyulur
"/etc/rc.d/rc.inet1" ve temel ağ programlarını çalıştıran "/etc/rc.d/rc.inet2" dosyalarıdır.
 "/etc/hosts " dosyasında makinaların IP numaraları ve İnternet adresleri yazılır.

(bir adres analizi)

/sbin/ifconfig lo 127.0.0.1
/sbin/route add -net 127.0.0.0

IPADDR="144.122.71.55"
NETMASK="255.255.255.0"
NETWORK="144.122.71.0"
BROADCAST="144.122.71.255"
GATEWAY="144.122.71.1"

İlk satırdaki ifconfig programı, makinanın kendisiyle haberleşmesini sağlamak amacıyla kendi ağ adresini (loopback device) 127.0.0.1 olarak tanıtmıştır. 
İnternet üzerindeki her makinanın loopback adresi 127.0.0.1 'dir. 127 ile başlayan hiç bir adres, İnternet üzerinde gerçek bir adres olarak kullanılamaz.

*"netstat"      komutu, makinanın ağ kartı üzerinden yapılan bağlantıların dökümünü çıkarır.





" NFS (Network File System)", bir ağ üzerinden disklerin paylaşımını sağlamak üzere geliştirilmiştir
*Yerel bir işletmede tüm kullanıcılar tek bilgisayar üzerindeki aynı disk alanını paylaşabilirler. Diğer bilgisayarlar açıldıktan sonra bu diskleri kendi dosya sisteminlerine bindirebilirler.
*NFS'in NIS ile birlikte kullanımı sayesinde bir kullanıcı herhangi bir makinaya girip diğer kullanıcılarla birlikte aynı dosya yapısı ile çalışabilir.
*Paylaşım sayesinde büyük disk alanı isteyen programlar tek bir sunucuda toplanabilir ve bu sayede önemli miktarda diskten tasarruf sağlanabilir.

# mount -t nfs aspendos:/home /users

//Blackilstte

**UL yi blackliste alma   04 ile başlar 80 ile biter toplam 7 byte tır  +   ve kart durumu  = 8 byte tır ve big endıandır  .. son byte 0 ise normal 80 ise blacklist demektir
örn :  04 FD 51 3A EE 4C 80 80

**Desfire ı Blackliste alma 5 byte tır..son byte kart durumudur son byte 0 ise normal 80 ise blacklist demektir ..Bir desfire kartın üzerinde yazılı olan degerin 300101 dosya adıdır es geceriz ..diger kalan kısımı son sayı haric almaayız ve  ondalıktır hex e ceviririz.bunu LİTTLE ENDIAN olarak ekleriz 
örn kartın üzerinde yazan :  3001 01 000000 3103       baştaki 6 sayı alınmaz sondaki sondaki sayıda alınmaz geriye 0000003103 kalır bunu hexe ceviririz =136
 
son durum :  36 01 00 00 80
 
//Parametre adları 

ilk tarih : verisyon tarihi 

ikinci tarih : uygulanacagı tarih



//UZAK MASAÜSTÜ BAGLANTISI KURMA    SSH    

TCP / IP nin "uzaktan bağlantı komutları "r" harfi ile başlar". Örneğin rlogin (remote login) bir sistemden diğerine telnet bağlantısı yaparken rcp (remote copy) ise bir makinadan diğerine dosya kopyalar






//Aritmetik karşılaştırmalar
-gt  büyük
-lt  küçük
-ge  büyük eşit
-le  küçük eşit
-eq  eşit
-ne  eşit değil
//Dizisel karşılaştırma
-z  boş dizi
-n  tanımlı dizi
=   eşit diziler
!=  farklı diziler
//Dosya karşılaştırması
-f  dosya var
-s  dosya boş değil
-r  dosya okunabilir
-w  dosyaya yazılabilir
-x  çalıştırılabilir dosya
-h  sembolik bağlantı
-c  karakter aygıt
-b  blok aygıt
//Mantıksal karşılaştırmalar
-a  VE
-o  VEYA
!   DEĞİL


[-z STRING ]    : True of the length if "STRING" is zero





//KELİMEYİ BÖL 
root@ovmc:/# a=ankaralilar

root@ovmc:/# echo ${a: -5}

Çıktı: lilar    

Baştan itibaren 5 elemanını keser yazar 




// === ile -eq FARKI


[ $a == $b ] and [ $a -eq $b ]

[ $a == $b ] - should be used for string comparison
[ $a -eq $b ] - should be used for number tests





// İF VE CASELE ORNEK 


#!/bin/bash
echo "0 ile 20 arasinda bir sayi secin"
read sec
if [ $sec -lt 10 ]
   then
        echo "Secilen sayi tek basamakli"
   else
        echo "Secilen sayi cift basamakli"
fi


(CASE ORNEGİ)

#!/bin/bash

clear
echo    "1. ekrani temizle"
echo    "2. sistemdekileri goruntule"
echo    "3. dizindeki dosyalari goster"

echo -n "Secenegi giriniz : "
read secenek

case $secenek in
        1)
          clear
          ;;
        2)
          w
          ;;
        3)
          ls -al
          ;;
        *)
          echo Hatali secenek
esac




/// CİHAZ PİNG ATABİLYORMU KOD PARCASI

# -q quiet
# -c nb of pings to perform
 
ping -q -c5 google.com > /dev/null
 
if [ $? -eq 0 ]
then
	echo "ok"
fi






// Update Rar Extract etme 



tar -xzvf update -C /







 
 
 *dosyamızı acarız  başınaa #!/bin/bash i ekleriz      kodumuzu yazar     	 dosyaadi ile çalıştırırız      . DİKKAT    /usr/bin     içine dosyayı acmalıyız
 
 
 
 
 *     -rwxrwxrwx   /user,grup,other
 $ chmod u+x deneme              (dosyanin sahibi calistirabilir)
$ chmod o+r t2sac               (digerleri okuyabilir)
$ chmod g-w deneme              (dosyanin grubu yazamaz)

*Dosya "sahibinin değiştirilmesi" için chown komutu kullanılabilir. Yukarıdaki dosyanın sahibini ozgur isimli kullanıcı yapalım.

   # chown ozgur deneme
   
* mount -t <tip> <nereye> <aygit>

CD-ROM sürücüsünü /mnt altına mount etmek için
# mount -t iso9660 /dev/cdrom /mnt


* ln -s <nereye-baglanti-yapilacak> <hangi-isimle-yapilacak>

ln -s /usr/src/linux linux  
cd linux                  //    cd linux yazarak       usr/src/linux   dizinine gidebiliriz

SEMBOLİK BAGLI DOSYANIN FARKI   en solunda "l"  harfi ile bşalar 

lrwxrwxrwx   1 root     root            9 Feb 15 08:14 linux -> /usr/src/linux     (linkten gelen l ile başlar )


* find <dizin-ismi> -name <ne-aratiliyor>


$ find . -name "*.html"
(bulundugunuz dizinden itibaren sonu .html ile biten dosyalari arar)


-type d   //sadece dizin adlarında arar
$ find . -name "*.html"   -type d 

find komutuna bir alternatif olan "locate" komutu ile dosyalar çok kısa bir sürede taranabiliyor

#locate pico
/usr/bin/pico

  //
  
  !! son komutu calıstır 
  
  !5 sondan 5. komutu  çalıştır
  
  //DOSYA ADI ÜRETME
  
  F="backup.´backup.date +%F-%H-%M-%S´.tgz"
  
  
  
  
 
 
 *"SİSTEM YEDEKLEME"
 $ tar cvMf /dev/fd0 /usr /home      (M yedeklerken disk dolarsa başka diskten devam et      )
 
 "dump"  ve "restore" de farklı yedek alma komutlarıdır    
 
 
 *"Fazla dosyaları temizlemek", gerekli olan dosyaların da yerinde olup olmadığını kontrol etmek için , sırasıyla
# make dep
# make clean
yazın. Ardından tüm nesne dosyaları ve eski sürümden arta kalan dosyalar silinecektir. Bu adımı es geçmemelisiniz.
Temizlik işleminden sonra,
# make zImage
 
 /usr/src/linux/arch/i386/boot dizini altına zImage adıyla yerleştirilecektir
 
 
 *LILO, bilgisayarın açılışı anında çekirdek ile ilgili düzenlemeleri okur, buna göre hangi çekirdekten açması gerektiğini anlar. 
 Yapılandırma dosyası biraz karmaşık olmasına rağmen kullanım aşamasında büyük yararlar sağlar. /etc/lilo.conf dosyasının içinde gerekli olan kurulum bilgileri vardır.
 
 
 *"ÇEKİRDEGE YAMA UPDATE ATMA"
 
 Yamayı önce /usr/src dizinine kopyalayın. Bu dizin altında iken
# zcat patch-2.0.11.gz | patch -p0

veya eğer sıkıştırılmış değilse
# patch -p0 < patch-2.0.11

# find . -name '*.rej' -print
Komut, .rej uzantılı dosyalar bulursa yama işlemi tamamlanamamış demektir. Eğer yama işlemi tamamlanırsa, sırasıyla
# make clean
# make config
# make dep


*"MODÜLLER"
 
 /lib/modules altında bulunur modüller
 
 lsmod    /*modullerin listesini verir*/
 
 # insmod modul-ismi
komutuyla çekirdeğe eklenir. Modülü hafızadan çıkarmak için
# rmmod modul-ismi


#kerneld komutu, 

arkaplanda çalışarak gerekli olan modülleri anında yükler. 
 
 
 * "YENİ UYGULAMA YÜKLEME"*


*Linuxçular yeni bir yazılımı denemek istediklerinde arşivi genellikle " /usr/src  " veya "/usr/local/src "dizini altına kopyalarlar ve burada açarak biraz sonra anlatılacak yapılandırma işlemini uygularlar 

*"SİSTEM AÇILIŞ DOSYALARI"


//inetd,
 en ağır görevleri üstlenen ve en önemli İnternet servislerindendir. Bu program sistem açılırken arkaplanda çalışmaya bırakılır.
 inetd'nin görevi belirli portları dinleyerek bu portlara yapılan bağlantıları denetlemektir. Bir bağlantı yapıldığı anda inetd bu portla ilgilenecek olan programı çalıştırır.
 Örnek olarak Linux'a ftp isteği geldiği anda inetd, ftp isteğine cevap verecek olan wu.ftpd programını uyandırır ve geri kalanını bu programa bırakır.

//syslogd ve /etc/syslog.conf
syslogd programı Linux'taki çeşitli olayların kayıtlarını tutar. Bunlar genellikle hata mesajları veya çekirdek mesajları gibi kayıtlardır. syslogd sistem açılırken arkaplanda işlemeye bırakılır.

//init,inittab

init, sistemde ilk çalışan programdır.
 Neredeyse sistemin tüm açılış yükünü elinde tutar. init sayesinde açılış anında hangi programların çalışacağı belirlenir. Bu programları da /etc/inittab dosyasından öğrenir.

//   etc/rc.d   dosyası


İşte sistemin kalbinin attığı yer.

*rc.0
Bu dosya, 0 (halt) çalışma düzenine geçerken okunur. Sistemin shutdown veya halt komutları ile kapatılmak istenirse bu program çalıştırılır. Önce sistemdeki tüm süreçler öldürülür, ardından sistemin kapandığını belirten bazı satırları kayıt dosyalarına atar. Tüm dosya sistemlerini umount işleminden geçirdikten sonra da sistemi dondurur.

*rc.K
Bu dosya, init tarafından 1 numaralı çalışma düzenine (tek kullanıcılı konum) geçilirken çalıştırılır. Tüm süreçler öldürülür ve sistem sadece konsoldan giriş yapılacak şekilde tekrar açılır.
*rc.cdrom
Bu dosya, bulduğu CDROM sürücüsünü /cdrom dizini altına mount yardımıyla ekler.
*rc.local
Çok kullanıcılı açılış anında çalıştırılan bu dosyaya istediğiniz programları ekleyebilirsiniz.
*rc.4
4 numaralı çalışma düzenine geçilirken bu dosya çağırılır. Tüm sanal konsollara vt100 terminalleri yerine grafik tabanlı bir program kullanılarak girilir.
*rc.M
init tarafından çok kullanıcılı konuma geçmek için kullanılır.
*rc.S
Sistem açılırken bu dosya mutlaka çalıştırılır. Takas alanı açılır, dosya sisteminde hata olması halinde bunu gidermeye çalışır. Bazı kontrollerden sonra kontrolü diğer rc programlarına bırakır.


// BELLİ ZAMANLAR KOMUT İŞLETİLMESİ (CRONTAB)


Bir crontab dosyasında toplam 6 alan bulunur. Bunlardan ilk beşi komutun ne zaman işleneceğini gösterirken son kısımda bu saatler içinde çalıştırılacak olan komutu gösterir.
Zamanı belirten sütunlardan ilki dakikayı (0 ile 59 arası), ikincisi saati (0 ile 23 arası), üçüncüsü günü (1-31 arası), dördüncüsü ayı (1-12 arası), son kısım ise haftanın gününü (0 pazarı göstermek üzere 0-6 arası) verir.

40 06 * * * updatedb
Yukarıdaki örnekte birinci ve ikinci sayılar 06:40 saatini gösteriyor. Diğer zaman kısımları * ile doldurulmuş olduklarından her gün 06:40'ta updatedb isimli program çalışacaktır.


Komut yerine kullanılacak olan program ismi parametre alabilir. Bu örnekteki crontab dosyası pazartesi günleri saat 1'de, /tmp dizinindeki üç günden daha eski dosyaları siler.
0 1 * * mon find /tmp -atime 3 -exec rm -f {} \;

Bu örnekte kullanılan virgül, her ayın 9, 19 ve 29'unu gösterir. Aynı alanda birden fazla sayı kullanacaksanız arada boşluk bırakmamaya dikkat edin.
0 1 9,19,29 * * find /tmp -atime 3 -exec rm -rf {} \;


Ay isimlerinde ocak, şubat, mart, nisan, mayıs, haziran, temmuz, ağustos, eylül, ekim, kasım, aralık için sırasıyla january, february, march, april, may, june, july, august, september, october, november, december kullanabilirsiniz. Benzer şekilde pazar, pazartesi, salı, çarşamba, perşembe, cuma, cumartesi ve pazar yerine sunday, monday, tuesday, wednesday, thursday, friday ve saturday kullanın. Aşağıdaki crontab girdisi yardımıyla iki ayda bir çalıştırılan komutla önce teyp başa alınıyor, ardından /home dizini bu teybe yedekleniyor:
0 2 1 */2 * mt -f /dev/rft0 rewind; tar -cf /dev/rft0 /home

 
 
 // ALİAS KISAYOL ATAMA
 
 "alias" komutu ile bir komut veya komut kümesinin yerine bir isim tahsis edilebilir. 

#alias sirala='ls -al'
 
artık ls -al yazmak yerine sadece   sirala yazarak bu işlemi yapbiliriz


// DEGİSKEN TANIMLAMA (EXPORT) 
 
 $export dosya="hello"
 $echo $dosya
 hello
 
 
 // GREP kullanımı 
 
 
 ps | grep qoscvm

  
  ps komutunu calsıtır cıktıda qoscvm geçenleri göster
 
 



grep  salı hikaye

hikaye dosyasında salı kelmesini arar 

grep -v   GEÇMEYEN SATIRLARI YAZAR

grep -c   GEÇENLERİ SAYAR



// IP ADRESLERİNİ BULMA 

 find /etc -exec grep '[0-9][0-9]*[.][0-9][0-9]*[.][0-9][0-9]*[.][0-9][0-9]*' {} \;

 
 // ADI BZUK DOSYLARI BULMA
 
 find . -name '*[+{;"\\=?~()<>&*|$ ]*'
 
 
 // GİF i PNG ye ÇEVİRME
 
 #!/bin/bash

ls *gif | xargs -t -n1 -P2 gif2png
# Converts all the gif images in current directory to png.

# Options:
# =======
# -t    Print command to stderr.
# -n1   At most 1 argument per command line.
# -P2   Run up to 2 processes simultaneously.


// DATE kullanımı 



echo " `date +%j`"    // yılın kacıncı günü oldugunu verir


echo " `date +%s`"  // tarihin EPOC time karsılıgını verir




 


	
	//Bir KLASÖRÜ BAŞKA KLASÖRE TAŞIMA 
	
	
	E_NOARGS=85

if [ -z "$1" ]   # Exit if no argument given.
then
  echo "Usage: `basename $0` directory-to-copy-to"
  exit $E_NOARGS
fi  
 
ls . | xargs -i -t cp ./{} $1                                // -i  derken çıktıyı komuta (cp ye ) gönder diyoruz   çıktı  {}  ile komuta yazılıyor ..






KULLANIMI :   sh b.sh /opt     gibi       bulundugumuz dizindeki dosyları /opt un altına taşır 












**GÜZEL ORNEK  ARD ARDA ACIKLAMA 

 //diskleri gösteriyor sonra % ekliyor sıralıyor en alttaki yani en büyügünü alır sonra yüzdeyi silr 
 
 
root@oscvm:~# df -h
df -h
Filesystem                Size      Used Available Use% Mounted on
ubi0:rootfs             158.9M     91.8M     67.2M  58% /
devtmpfs                103.9M      4.0K    103.9M   0% /dev
tmpfs                   120.0M    176.0K    119.9M   0% /run
tmpfs                   120.0M    332.0K    119.7M   0% /var/volatile
/dev/ubi4_0             253.2M      6.9M    241.6M   3% /opt
/dev/ubi5_0               8.5M     20.0K      8.0M   0% /mnt/ftyfs
/dev/ubi6_0             409.4M    110.5M    294.2M  27% /mnt/mbfs


root@oscvm:~# df -h | awk '{print $5}' | grep % | grep -v Use | sort -n | tail -1
df -h | awk '{print $5}' | grep % | grep -v Use | sort -n | tail -1
58%


root@oscvm:~# df -h | awk '{print $5}' | grep % | grep -v Use | sort -n | tail -1 | cut -d "%" -f1 -
df -h | awk '{print $5}' | grep % | grep -v Use | sort -n | tail -1 | cut -d "%" -f1 -
58














 
  // ls kullanımı 
  
  
  ls -t en yeni dosyayı en başta sıralr
  
  ls -S En büyük dosyayı en başta sıralar
  
  
  
  //MET KARAKTERLER 
  
  ^ başında 
  $ satır sonu
  A* a 0 veya daha fazla ise 
  A^ a 1 veya daha fazlaysa
 
 
 export -n  dosya // degiskeni siler sistemden 
 
 
 
 
 
"env" komutu yardımıyla sistemde öntanımı yapılan veya sonradan tanımlanan tüm değişkenler ekrana listelenir.
 
 $env    (sitemdeki degiskenleri görüntülüyoruz aşagıda listelendi)
 
SHELL=/bin/sh
TERM=linux
HUSHLOGIN=FALSE
USER=root
ad=suleyman
PATH=/usr/local/bin:/usr/bin:/bin:/usr/local/sbin:/usr/sbin:/sbin
PWD=/home/root
EDITOR=vi
TZ=UTC
PS1=\u@\h:\w\$
SHLVL=1
HOME=/home/root
LOGNAME=root
TSLIB_TSDEVICE=/dev/input/touchscreen0

 
 *LOGNAME: Sistemdeki kullanıcı hesabınının ismini tutar.
 $ echo $LOGNAME
gorkem


*TERM: Kullanıcının halen üzerinde çalıştığı terminal tipini görüntüler
 
 $ echo $TERM
linux




 //* Parametreler
 
 
 FS053 : file system 
 FS054: kernel
 FS055 : reader
 
 
 
 FB005:file 
 FB006:redar
 FB007:OBCH
 
 
 
 // Athens DMC
 
 10.231.19.7
 
 
 
 
 
 
 
 
 // CİHAZA KESME YOLLAMA    ///
 
 Ctl-A:Moves cursor to beginning of line of text (on the command-line).
Ctl-B:Backspace (nondestructive).


Ctl-C:Break. Terminate a foreground job.


Ctl-D:Log out from a shell (similar to exit).
EOF (end-of-file). This also terminates input from stdin.

When typing text on the console or in an xterm window, Ctl-D erases the character under the cursor. When there are no characters present, Ctl-D logs out of the session, as expected. In an xterm window, this has the effect of closing the window.

Ctl-E:
Moves cursor to end of line of text (on the command-line).

Ctl-F:
Moves cursor forward one character position (on the command-line).
Ctl-G:
BEL. On some old-time teletype terminals, this would actually ring a bell. In an xterm it might beep.

Ctl-H:
Rubout (destructive backspace). Erases characters the cursor backs over while backspacing.



***kullanım : 

 
 a="^D"
 
 echo "$a"    dersek  komutun icinde bunu okur okumaz script durur kod dışına cıkar 
 
 
 
 
 
List="one two three"

for a in $List     # Splits the variable in parts at whitespace.      //$list olursa tek tek alt alta yazar
do
  echo "$a"   
done
# one
# two
# three



// LİSTEYİ  TIRNAK İÇİNDE YAZMA 

for a in "$List"   # Preserves whitespace in a single variable.			 //"$list" olursa bür cümle kabul eder yanyana yazar  yazar
do #         
  echo "$a" 												
done
# one two three




// TIRNAK İÇİNDE YAZMANIN FARKI 



var="'(]\\{}\$\""
echo $var        # '(]\{}$"
echo "$var"      # '(]\{}$"         // AYNI TEKRAR EDENLERİ BİR DAHA YAZMAZ 

 
 
 // FORMATLI GÖSTERİM (TIRNAK İÇİ KOMUT YAZMA

 
 
 a=`ls -l `

echo $a

Çıktı:

-rw-r--r-- 1 root root 0 Apr 10 2018 1523396208 -rw-r--r-- 1 root root 0 Apr 10 2018 1523396216.txt drwxr-xr-x 2 root root 232 Oct 13 11:36 Settings -rw-r--r-- 1 root root 40 Apr 10 2018 a -rw-r--r-- 1 root root 65 Oct 17 17:34 a.test 
-rw-r--r-- 1 root root 15038 Apr 10 2018 a.txt drwxr-xr-x 2 root root 160 Jun 6 07:29 ab drwxr-xr-x 2 root root 160 Jun 6 07:31 ax -rw-r--r-- 1 root root 0 Oct 17 16:26 ayaklar -r 
 
     ÇIKTI BÖYLE KARIŞIKKEN 
	 
	 
echo "$a"

Çıktı:


-rw-r--r--    1 root     root             0 Apr 10  2018 1523396208
-rw-r--r--    1 root     root             0 Apr 10  2018 1523396216.txt
drwxr-xr-x    2 root     root           232 Oct 13 11:36 Settings
-rw-r--r--    1 root     root            40 Apr 10  2018 a


   ÇIKTI BÖYLE DÜZENLİ OLUR 
 
 
 // 
 
 ***
 
 `basename $0`
 
 Çalıştıgımız Scriptin adını verir 
 
 
 
 
 
 
 
 
 
 
 
 
 //Authenticationdan geçmek icin 
 
  nano /opt/app/scripts/common.in

  
  girip   kodların en sonuna  }  işaretten sonra 
  
export VAL_NO_AUTH=1

eklenir 



 
 
 //Dosya ismi üretmek için kullanılabilir.

 F="backup.`date +%F-%H-%M-%S`.tgz"
tar zcvf /mnt/usb/$F workspace/project
 
 
 
 //Led yakma söndürme 
 
 
 echo 1 > /sys/class/leds/led4g/brightness //Led yakma
echo 0 > /sys/class/leds/led4g/brightness //Led Söndürme
 
 
 
 
#Wirelessı kapatma 

ifdown wlan0


#gizli ag 


SSID: oswlhst (hidden)
Password: hstwl!0112




# server ip 

10.231.10.121




#cihazı kapatmadan programı resetleme 
 konsoldan /etc/init.d/oscvm.sh stop
 sonra /etc/init.d/oscvm.sh start


# Seul server Ip adresleri;

Bus için  10.77.134.176
Tram için 10.77.134.171




OVMC Calibrate


#OVMC
/etc/init.d/dtsrd-qtdemo.sh stop
/etc/init.d/ft5206-fw-upgrade.sh -f
ts_calibrate
ts_test
vi /etc/modprobe.d/qt1070.conf
options qt1070 dump=1
options qt1070 lp=2
#options qt1070 maxondur=0
# ovmc v1 20160116 modifiyeli flex pcb btn v1 values
options qt1070 nthr=100,14,14,12,13,13,6
options qt1070 ave=32,16,16,16,16,16,0
options qt1070 di=100,10,10,10,10,10,10
sync
sync
reboot





# OVMC COM  baglı iken KRUSADer ile cihaza ulaşmak için 

ssh-keygen -R 10.10.10.50

**
HEX bir dosyayı Validatörde acmak 

hexdump -C /adres yolu 


örn: hexdump -C /mnt/mbfs/data/params/
örn: hexdump -C /mnt/mbfs/data/params/






*
Flashtan cihaza dosya kopyalama (krusadersiz)

cp /run/media/sda1/SubP/*.* /opt/data/params/

Subpnin içndekidosyları    SCVM ye kopyaladık */



/*## */
bilgisayardan SCVM ile SERVERA baglanma işlemi

1)gizli aga baglanıyoruz 
2)cihazı OBCH a baglıyoruz 
3)OBCHı da ethernet ile bilgisayara baglıyoruz




*putty de 
route add -net 10.230.13.0 netmask 255.255.255.0 gw 10.10.10.1  eth0


yazıp ardına ethernet ayarımızı özelliklerden 

10.10.10.1

255.255.255.000

/*# OSCVM veya OVMCde ekran görntüsü alma*/

*Puttyde o cihazın log terminalinde

opt/app/scripts/snapshoot.sh

*Artık o anki görüntü 




/*#neti acar  */

etc/init.d/config-eth0.sh start



/*# cihazı(OSCVM) bilgisayardan yönlendirmek servera yönlendirmek icin kabuk   */ 
 *vi /usr/sbin/addroute.sh
 icine       
 route add -net 10.77.134.0 netmask 255.255.255.0 gw 10.10.10.1  eth0
 
 yazarız
 ve putty de ;
 
 
chmod +x /usr/sbin/addroute.sh
addroute.sh   



"NOT: Dinlemek icin 115200 programlamak icin 57600 bauadrate"





**ovmc nin dilini degistirmek icin 	

/opt/app/script/start.sh  çalıştır

ve bu aşagıdaki satırı bul      -qws nin    önüne  -ln     ekle ve kaydet  



while true; do
    echo "Starting QValidator Application"
    /usr/bin/nohup $APP_NAME -ln -qws >/dev/null 2>&1




/* IP atama */


 1-Ağ Bağdaştırıcısına ait ayarları öğrenmek için:       ifconfig

2- Ağ bağdaştırıcılarından eth0 kartı için geçerli ayarları öğrenmek için:      ifconfig eth0

3- Ağ bağdaştırıclarından eth0 kartı için IP/Subnet Mask atamak için:     ifconfig eth0 192.168.2.1 netmask 255.255.255.0

4- Ağ bağdaştırıclarından eth0 kartı için Default Gateway(Varsayılan Ağgeçidi) atamak için:     route add default gw 192.168.1.1

5- Ağ bağdaştırıclarından eth0 kartını devredışı bırakmak için:            ifconfig eth0 down

6- Ağ bağdaştırıclarından eth0 kartını aktif duruma getirmek için:     ifconfig eth0 up

 
/*Cihaz önceki updatelere gidiyorsa*/


/opt/app/currentversion   

içini degistir 10dan büyük bir update yaz 







/* GİZLİ AĞIN AYARLARI  */


IP:  10.231.10.70

ALT MASKE:  255.255.255.00

GEÇİT : 10.231.10.1
DNS :   8.8.8.8
        8.8.4.4


/** Hex atma */


1)kablo cihaza baglanır 
2)flash magic acılır
3)en yüksek baudrate secilir
4)cihazın elektrigi kesilir 
4tuşa basılı şekilde elektrik verilir.sonra tuşa basılmak bırakılır
5)flash magic te   START denir 





/** yen bir özellik SET etmek için komutlarmızın bulundugu yer */


/opt/app/bin/val-config --help 




/*** logları görebilmek icin (logread) özelliği*/



tail -f /mnt/mbfs/log/messages



//wireles hakkında bilgi almak cini 

iwconfig




// UBOOT VERSİYONUNU ÖGRENEK İÇİN  (çekirdek sürümü )

/usr/src   dizinine git 

uname -r çekirdek sürümünü verir 

uname -a  




// rouee 

route add -net 10.230.3.0 netmask 255.255.255.0 gw 10.10.10.1 eth0



// bir scripti programı LİNUX Acılısında çalıştırmak 


Programı /etc/init.d/  altında oluştururuz ve   rc5 in içinde degişiklik için ise 


update-rc.d program_adi  defaults 
 
 update-rc.d -f program_adi  remove    






###---ATINA TEMEL KOMUTLAR---###
***BİLGİSAYARIN ETH IP STATIK OLARAK VERİLECEK. (ip adresi: 10.10.10.5 alt ağ maskesi: 255.255.255.0)
10.10.10.50 (OVMC1)
10.10.10.51-52-53-54 (OSCVM1-2-3-4)
10.10.10.59 (OBCH1)
10.10.10.60 (OVMC2)(Sadece TRAM)
10.10.10.61-62-63 (OSCMV1-2-3)(Sadece TRAM)
10.10.10.69 (OBCH2)
login as: root //Enter(root@oscvm/ovmc:~#) -> terminale giriş için kullanılır
ifconfig //eth0 (ethernet ip) / wlan0 (wifi ip) (sadece ovmc) -> cihazın aldığı ip bilgilerini görüntüler
ping 10.77.234.xxx (CTRL+C /komuttan çıkmak için kullanılır)
ls -l /opt/data/params/ -> parametre klasörünün içeriği listelenir
cat /opt/data/config/main_config.cfg -> cihazın app ayarlarını görüntülemek için kullanılır
nano /opt/data/config/main_config.cfg -> cihazın app ayarlarını değiştirmek için kullanılır
dhclient wlan0 -> cihaz wifi bağlantısı yapmasına rağmen ip alınamıyorsa koullanılır.


###---IMAJ/UBOOT/KERNEL/APP/LPC YÜKLEME---###
IMAJ/UBOOT YÜKLEME
1) OVMC/OSCVM uygun olan Imaj USBsi cihaz kapalı iken takılır. Cihaza elektrik verilir.
2) Cihaz ekranında yükleme barı görülür cihaz açılana kadar beklenir.
3) sync komutu uygulanır
4) reboot komutu uygulanır
5) Uboot versiyonu gözlemlenir (.45 olacak)
6) ilk açılışta USB çıkarılır (DTSis ekranında)

SAMD20/KERNEL YÜKLEME
1) Imaj yüklemesi yapılır
2) Samd20 USBsi cihaz ve uygulama açık iken takılır
3) loglarda kopyalama işleminin bittiği gözlemlenir
4) sync reboot komutları uygulanır                                                                                                              
5) ilk açılışta USB çıkarılır (DTSis ekranında)
6) cihaz açıldıktan sonra root komutu uygulanır
7) depmod komutu uygulanır
8) sync reboot komutları uygulanır.
9) kernel versiyonu tarihi kontrol edilir
10) cihaz açıldıktan sonra tuş testleri yapılır.

APP YÜKLEME
1) Uboot, Kernel versiyonları düzgün olan cihaz açılır.
2) App USBsi takılır
3) ilk açılışta USB çıkarılır (DTSis ekranında)
4) Cihazın 88/101 versiyonunda açıldığı görülür
5) Information ekranından reader ve OBCH (sadece kurulum yapıldıktan sonra) versiyonları kontrol edilir. Gerekirse güncelleme işlemi yapılır.

READER YÜKLEME
1) Uygulama açık iken reader update USBsi takılır
2) ilk açılışta USB çıkarılır (DTSis ekranında)
3) Information ekranından reader versiyonu kontrol edilir
Alternatif
1) Cihaz kapalı durumda iken LPC kablosu takılır
2) Kablo üzerindeki düğme basılı tutularak elektrik verilir
3) Flashmagicten doğru program seçilerek start denilir
5) İşlem bittikten sonra elektrik kesilip kablo çıkarıldıktan sonra cihaz tekrar açılır
6) Information ekranından reader versiyonu kontrol edilir 
 
 
 

 
 
 
 
 
 
 
 ** DU  dosya boyutlarını yazar 


du -c kilobayte cinsinden yazar 


du -h mb cinsinden yazar


du -S bütün alanın toplam boyutunu yazar







** FILE  : dosyanın tipini verir




**STAT : dosyanın degistrilme oluşturulma kullanıcı adı vesaire pek cok ayrıntıyı verir



root@ovmc:/# stat x





**// Dosya Adı değitirme//


rename 's/\.JPG$/.jpg/' *.JPG 






.JPG uzantılı dosyaların adını .jpg olarak degisitrmeye yarar 







  File: x
  Size: 0               Blocks: 0          IO Block: 4096   regular empty file
Device: dh/13d  Inode: 7651        Links: 1
Access: (0644/-rw-r--r--)  Uid: (    0/    root)   Gid: (    0/    root)
Access: 2016-10-15 11:06:57.000000000
Modify: 2016-10-15 11:06:57.000000000
Change: 2016-10-15 11:10:40.000000000





 
 
 


**
touch test1 test2 test3

diyerek 3 farklı dosya olusturabiliriz

** 
cat "hello" > test.txt   

diyerek test.txt e yönlendiririz 

cat  test.txt < "hello"

diyerekte aynı işi yapabiliriz

** cat >test.txt 

diyerek bulundugum xtermde test.txt in icine istedigimiz yazabiliriz 



**cat test1 test2 > test3 


dersek test1ve2 nin icindekileri test3 e yazarız yani birleştiririz


** 

ln  test1  kısayol 

dersek test1 e kısayol diye dosya ile ulasabiliriz bu HARD linktir.test1 silinsede kısayolla bunun icerigine ulaşabiliriz

ln -s test1 sof_kısayol 

dersek  test1 silinse soft_kısayolla  test1 in icerine ulasılamaz yani bagı SOFTTUR

**
wc test1 


dersek bize test1 in icinde  kac satır,kelime,harf oldugunu gösterir

wc -l test1 

dersek bize test1 icinde kac satır var gösterir

wc -w  (kac kelime word var gösterir)


**

dd if=test  of=out conv=ucase


dersek test adındaki dosyamın icindeki harlferi   büyük harfe cevir  ve OUT a yönlendir 
büyük hali  görüntülemek icini 

cat out


**
 banner suleyman 


diyerek ekranda koca yazılarla sULEYMAN yazısı yazdırabiliriz (program yüklemek gerekebilir sudo apt....)

bu satır satır yazar yazdıgımızı ama yanyana yazsın istersek tırnak "" icinde yazarız

**
compress -v test1


dersek test1 dosyasını ZIPLER


zcat test.Z

dersek zip acar icini görüntüler  (GÜRÜNTÜLEMEK İÇİN ACAR DOSYA HALA ZİPLİ)


uncompress test.Z 

dersek dosya zipten cıkar 


***

sh test.sh 



test.sh diye bir kabugumuz var test.sh dersek calısmaz ( programın basında usr/bin) demedik  calıssın istersek  basına SH demek gerek



**
cat >    dosyayı sil baştan yaz

cat >>   dosyanın üzerine yaz


**
PYTHON== SHELL

gibi değişken tanımlarken 

a=25 

echo $a  diyoruz 

yada


a="hayat güzel " 
echo $a


***
argumanla ad değiştirme

"test" adında bir dosya oluşturup icine 

"This is a file" yazıyoruz  

ss4.sh diye bir kabuk oluşturuyoruz.içine aşagıdaki kodu yazıyoruz .. ilk satır diyoruz ki iki arguman al ve bunlardan 
ilkini digerine taşı yada adını değiştir diyoruz .ikinci satırdada yeni dosyayı göster


mv  $1 $2
cat $2 



//komut satırında

sh ss4.sh   test output 


dersek cıktımız :


This is a file 	


** Kabukta argumanla calısırken  

sh ss5.sh   ARGUMAN1  ARGUMAN2 ARGUMAN3    ....    diye devam eder    arguman1 e ulasırken $1   arguman2 ye $2 diye ulaşırız 


** SET      özelliği bunu bir kap gibi düşünebiliriz 


set  BU DUNYA COK GUZEL      diyerek


echo $1    dersek  BU
echo $2    dersek  DUNYA   .... çıktılarını alırız 




tamamını yazdırmak istersek      echo $*    deriz 



// ECHO güzel bir kullanım 

echo sp{e,a,i,y}ll


Çıktı :   spell spall spill spyll



// PASTE 

iki farklı dosyayı birbirine yapştırır 

*bash$ cat items
alphabet blocks
 building blocks
 cables

bash$ cat prices
$1.00/dozen
 $2.50 ea.
 $3.75

bash$ paste items prices
alphabet blocks $1.00/dozen
 building blocks $2.50 ea.
 cables  $3.75



//




** EXPR 

eğer matematiksel işlem yaptıracaksak başına EXP yazıyoruz örn;


a=15 b=30 

echo 'exp $a + $b'    //Toplar

echo 'exp $a - $b'   //Çıkarır 	 





**SLEEP    uyku özelliği

 bu örnekte kullanıcıdan alınan cümleyi 2 şer saniye aralıkla satır satır yazdıracagız 



echo "bir cümle giriniz "
read cumle
for satir in $cumle
do
        echo $satir
        sleep 2
done


  SLEEP ile USLEEP FARKI:  Usleep te uyutur fakat aldıgı degeri MİKROSANİYE cinsinden çalıştırır .Sleep dakika cinsinden uyutur 
  
   usleep 30000



//KULLANICI ROOTMU  KONTROLÜ




ROOT_UID=0   # Root has $UID 0.

if [ "$UID" -eq "$ROOT_UID" ]  # Will the real "root" please stand up?
then
  echo "You are root."
else
  echo "You are just an ordinary user (but mom loves you just the same)."
fi

exit 0








//timeout    (IMOUT   )      :  

***read secenegine cevap okadar sürede gelmezse otomatik cevabı basar 

TMOUT=3    # Prompt times out at three seconds.

echo "What is your favorite song?"
echo "Quickly now, you only have $TMOUT seconds to answer!"
read song

if [ -z "$song" ]
then
  song="(no answer)"
  # Default response.
fi

echo "Your favorite song is $song."








**  Bir Alt satıra Gecme (ESCAPE )
  \n ile mümkündür  

  Boşluk bırakma  \t ile mümkündür


echo " Hello \n  how are you?"



**TPUT  ekran ile ilgli eistli bilgileri yazar

tput clear   ekranı temizler

tput lines    ekranın satır sayısını verir

tput cols     ekranın column syısını verir 

tput bold echo "dunya"      dünya yazısını kalın yazar



**Komut Satırında bir önceki komut olumlu bir işlem yaptı ise "$?"    ile aldıgımız deger  0 dır
  komut satırında bir önceki komut olumsuz bir işlem yaptı ise "$?"    ile aldıgımız deger 1 dir 


örnek :

mkdir dosya  

echo $?




mkdir -p   bilgiler


eger bilgiler  adında klasör yoksa oluşturur varsa oluşturmaz  




Sonuc : 0  dır   cnkü dizin başarı ile oluşturuldu 


** IF DONGUSU 



mkdir oz
if
test  $? -eq 0                   //DOSYA OLUŞTU $? degeri 0 dır 
then 
	echo "dosya tasındı"
else
	echo "dosya tasınamadı"
fi


NOT : Her İF Veya ELİF ten sonra THEN gelir 


***   -f    ile böyle dosya varmı kontrolü yapılır

                             

echo "Bir dosya adi giriniz: \c "
read ad 
if [ -f $ad ]
then 
        echo "böyle bir dosya mevcut"                            

else
        echo "böyle bir dosya yok"
fi





//  Bir STRİNGİ POSİTİONAL PARAMETERS OLARAK YAZDIRMA (SET)


variable="one two three four five"

set -- $variable      //$variable olarak içine positional giriyoruz 
# Sets positional parameters to the contents of "$variable".

first_param=$1
second_param=$2
shift; shift        # Shift past first two positional params.
# shift 2             also works.
remaining_params="$*"

set --    // ilede positional parametersi boşaltırız 

echo "$first_param"    // NULL cevabını alırız 

















// READ ile ENTERSİZ GİRDİ ALMA



read -s -n1 -p "Hit a key " keypress
echo; echo "Keypress was "\"$keypress\""."


-n1 Bir karakter yazar yazma işlem biter ekrana basar.... -n5 dersek 5 karakter yazar yazmaz bitirir ekrana basar 
 keypress Değişkenine atar 
 
 
 









NOT :    -d  ile dirmi    -w ile yazma yetkisi varmı  -s ile dsyanın boyutu 0 dan büyükmü   diye kontrol yaparız 

***STRİNG ALMA

str1="merhaba"
str2="dunya


[ "$str1" == "$str2" ]    //stringi alıp eşit mi aynı diye kontrol edebiliriz 



NOT : KULLANICIDAN GİRDİ ALACAKSK echo ile bildirimi yapıp sonunu \c ile bitirmeliyiz ki bir alt satıra gecsin yoksa hata alırız
       ayrıca    shellde AND  yani ve için  a      OR veya icin ise -o  kullanılır

echo " 50 ile 100 arası bir sayı giriniz :\c"                       //BURADA "\c"  görebiliriz 
read sayi
if[ $sayi -le 100 -a $sayi -ge 50 ]                                 //BURADA   "-a" ile ve işlemi yaptırıyoruz 
then 
	echo "sayi istenilen aralıkta"
else
	echo "sayi istenilen aralık dışında"

fi



**CASE KULLANIMI                     

                     
echo "enter karakter:\c"

read var

case $var in 
[a-z])
        echo "kucuk harf"
        ;;
[A-Z])
 echo "buyuk harf"

        ;;
[0-9])
        echo "bu bir rakam"
 echo "buyuk harf"

        ;;
?)                                              //  ?)   caseteki duruma uymayan ama tek karakter girildi ise bunu çalıştır
        echo "özel karakter girdin"
        ;;
*)
        echo "cok karakter girdin"             // case in hicbirine uymuyorsa  bunu çalıştırır
        ;;
esac


CASE İÇİN 2. ÖRNEK

echo "bir sayi giriniz"
read sayi
case $sayi in

[a-z]* | [A-Z]*)
        echo "kelime harfle baslıyor"
        ;;
[0-9]*)
        echo "kelime sayı ile başlıyor"
        ;;
*[0-9])

        echo "kelime sayi ile bitiyor"
        ;;
*)
        echo "bilemedim ki"
        ;;
esac





** FOR DÖNGÜSÜ


for item in *
do
        if [ -d $item ]
        then 
                echo  $item
        fi
done
           //BuluNDUGUMUZ dİZİNDEKİ KLASÖRLERi LİSTELER


**GREP KULLANIMI

Bir tane cumle.txt dosyamız olsun içinde "Dunya" gecen kelimleleri buldurmak icin 

gep -q   :   -q çıktıyı yazdırmaz engeller outputa basmaz 


örnek :

letter_sequence=inu
if echo "$word" | grep -q "$letter_sequence"
# The "-q" option to grep suppresses output.
then
  echo "$letter_sequence found in $word"
else
  echo "$letter_sequence not found in $word"
fi



//DOSYANIN UZANTISINI BELİRLEME 


${file##*.}   bu degiskende bu ifadeye kadar alma sonrasını al 



örn : 

root@ovmc:/# file=a.gz
root@ovmc:/# echo ${file##*.}
gz










grep -i Dunya cumle.txt   

  deriz    eğer hangi satırda bulundugunuda yazdırmak istersek     grep -i -n    yazmamız gerekir..büyük kücük harf gözetmez bulur yazar



** pek cok komutu komutu satırında tek seferde yazmak için aralarına ; konulur 


örn :


ls;date;cal


önce ls komutunu ekrana yazar
sonra tarihi yazar 
en sonda takvimi ekrana yazar


**SCRİPT İÇİNE SCRİPT ÇALIŞTIRILABİLİR


örn:


script1.sh 

icine  

sh script2.sh diyerek     ...script1 calısınca script2 de calısır








*** BİR ÖNCEKİ KONUMUMUZUN BİLGİSİNİ VERİR


echo $OLDPWD









 **** ARALARA ÇIKARMA YAPMA    "IFS"


IFS:+  dersek listedeki elemanları arasına + varsa  siler örnek 


var1="a+b+c"
var2="d-e-f"
var3="g,h,i"

IFS=+
# The plus sign will be interpreted as a separator.
echo $var1     # a b c
echo $var2     # d-e-f
echo $var3     # g,h,i




***

echo $MACHTYPE    //makine tipini verir

echo $OSTYPE     //işletim sistemini verir

echo $PATH      // dosya yolunu verir


// FONKSİYON TANIMLAMA VE ADINI KULLANABİLME    (FUNCNAME )

xyz23 ()
{
  echo "$FUNCNAME now executing."  # xyz23 now executing.
}

xyz23













***  DOSYA KARŞILAŞTIRMA




-z -n	unary comparison	string is/is-not null
-e -f -t -x, etc.	unary comparison	file-test
< -lt > -gt <= -le >= -ge	compound comparison	string and integer
-nt -ot -ef	compound comparison	file-test



** 

kill $$    // "bütün süreçleri öldürür"

kill -kill pid   //zorla öldürür 


// XARGS Kullanımı 


*echo 1 2 3 4  | xargs  -n 3     
içindekileri 3 er 3 er yaz demektir 

Çıktı :

root@ovmc:/# echo 1 2 3 4 | xargs -n 3
1 2 3
4


*ps  | grep root  | awk '{print $0}' | xargs  kill -9




ps gelen root ile alakalıların PID sinin alır ve öldürür 


*find  .  -name "*.png" | xargs rm -rf



.png uzantılı dosyaların hepsinin bulur siler 




** FİND ile bütün dosya bulma ve komut uygulama 


ls find ~/ -name '*.sh' -exec rm {} \;






**CUT Kesme özelliği



cut -d'
 ' -f3,7,19 testfile

Burada testfile  ın 1.ve 2. satırını yaz diyor 

örn 
date komutunun cıktısı    
Cts Ağu  6 22:54:51 EEST 2016

Biz sadece saati kısmı yani 22 yi almak istersek  12ve13 . karakterleri almak istiyoruz  aşagıdaki komutu veririz 12-14 aralıgı  -c ise column


date | cut -c12-14

Çıktı:22










** TR 

Karakterleri dönüştürür yada siler 

örn :

echo "abcdef"                 # abcdef
echo "abcdef" | tr -d b-d     # aef      //  b ile d arasındakinide cıkart dedik

örn2:

tr -d 0-9 <filename
# Deletes all digits from the file "filename".    // 0-9 dahil aradaki sayılarıda cıkart dedik



**STAT

herhangi bir dosyanın yada komuun ne zman kullanıldıgı veya ne zaman degisikligi yaplıdıgı gibi pek cok bilgiyi görüntüler


stat  /etc/init.d



**
Eger ECHO nun kapanış tırnagını bir alt satıra koyarsak   sanki bir satır boşluk bırakır görüntülerken 


echo " süleyman
"
echo "kabadayı
"


dersek 


çıktı:

süleyman

kabadayı 




**"Terminal ekranını boyutunu komutla degistirme"  RESİZE

resize -s 30 30   // row ve columns




      

** MENU OLUŞTURMA 



if which dialog > /dev/null
then
    dialog  --backtitle "Linux Software Diagnostics (LSD) Shell Script Ver.1.$
else
    cat /tmp/a |more
fi

rm -f /tmp/a






**//SİSTEMDEKİ BÜTÜN KOMUTLARI GÖRMEK İÇİN 

enable -a 


**


!cd 

!date -s 


ile  o komutun en son kullanıldıgı hali getirir


** KISAYOLLAR



ctrl + K   kopyalama yapar


tee :  çıktıyı hem ekrana hemde belirtilen dosyaya yollar yazar

ls /etc/init.d | tee a.txt


ls /etc/init.d cıktısını hem ekrana basar hemde a.txt dosyasının içine yazar 







**

command1; command2


önce command1 i sonra command2 yi çalıştırır






//TMP nin icinde a diye bir menü olustururuz  artık verilecek 

her komutu işlemi >> /tmp/a   ya yönlendiririz o menü sayfasında bu görunur


örnk:

date >> /tmp/a

ls -l /tmp/a



** Sed Kullanımı Bir dosyada istedigimiz yeri degistrmemize yararlar

sed 's/Nick/John/g' report.txt      //Nick  Gecen Yerlere  John yaz 

             -i  -e koyarız dosyaya kaydetmesi icin 
			 
			 
			 
			 
			 
sed -i -e 's/LANGUAGE=en/LANGUAGE=gr/g'   /mnt/mbrs/data/config/mainconfig.ini

         burada uygulamanın dilini yunancaya cevirdik 
		 
		 
		 
		 
		 
ls -l | sed -e "s/[aeio]/qq/g"



ls -l nin çıktısında aeio  harfi varsa değiştir yerine qq yaz diyoruz 		 
		 
		 

sed  '/erors/p'example    //example ın içindeki eroor geçen satırları iki kez yaz 

sed  -n  '/erors/p'example    //example ın içindeki eroor geçen satırları yaz 


sed '/erors/d'example    //exampledaki error gecen satırları sil 





		 
		 
		 
		 
		 
** $OPTION ile  menu yapma (GÜZEL BİR YOL)

#!/bin/bash
 OPTIONS="Hello Quit Dunya Genis  "
 select opt in $OPTIONS; do
 if [ "$opt" = "Quit" ]; then
 echo done
 exit
 elif [ "$opt" = "Hello" ]; then
 echo Hello World
 else
 clear
 echo bad option
 fi
 done

bu kodla OPTIONS "hello quit Dunya genis "   içinde ne kadar eleman varsa onları 1 . 2. 3. .4 diye secenke yapıyor 
		 
		 
		 
		 
		 
		 
		 
		 
		 
	 ** AWK : veritabanında yada bir dosyada verileri almaya okumaya kolon satırca işlem yapmaya yarari
 
  Aşagıdaki blogu inventory.txt ye yazarsak
  
 egg       order   4
cacke      good    10
cheese     okay    4
pen        good    12
floppy     good    5


$ awk '/good/ { print $3 }' inventory.txt     //burada diyoruz ki good gecen satırların 3 kolonlarını yaz  
10
12
5








ls -ldh* | grep -vtotal | \ awk '{ print "Size is " $5 " bytes for " $9 }'


Çıktı: 
Size is 160 bytes for origSize is 121 bytes for script.sed
Size is 120 bytes for temp_fileSize is 126 bytes for test
Size is 120 bytes for twolinesSize is 441 bytes for txt2html.sh


** SED   herhangi bir  dosyanın bir satırını yada dosyadaki bir cümlenin yerine baska bir cümleyle degistirmeye yarar



sed '/LANGUAGE=en/s//LANGUAGE=gr/g' /mnt/mbfs/data/config/main_config.ini    // Burada config dosyamızın icindeki ingilzce dili yunanca yapıyoruz   gr yaptık





** UNİQ  ile bir dosyadak tekrar eden verileri temizleriz tekrarı azaltırız 


uniq   dosyaadi	 
		 
		 

uniq -u   : Sadece uniq olanları getirir 

uniq -d  : uniq olmayanları getirir 



  

# SES CALMA      
 echo 0 > /sys/class/leds/audio_amp_shdn/brightness   //ampyi kapatıyoruz 
root@oscvm:~# /usr/bin/aplay -q /run/media/sda1/1.wav



  

* CİHAZA SSH İLE KOMUT GÖNDERME 



ssh root@10.10.10.51
 
 *CİHAZA SSH İLE DOSYA KOPYALAMA
 
  scp -r root@10.10.10.51:/mnt/mbfs/data/recs/recdb.sqlite /run/media/sda1/db/os1/
 
 **
 
 > karakteri standart hatayı dosyaya yönlendirmez. Bu işlem için 2> kullanılır. Ama hatayı görebilmek için, hata yaratan bir komut yazmalıyız, değil mi?
$ ls /deneme
/deneme : No such file or directory
$ ls /deneme 2> hata
$ cat hata
/deneme : No such file or directory


** Eger Yapılan işlemlerin çıktısı ekrana basılması istiyorsak   kullanılmayan bir konsola yönlendiriliebilir 

örnegin ;


date   > /dev/tty9


ekranda hicbir çıktı olmaz 


**  Eger bir işlem sonunda ÇIKTIDA HATA BASMASINI İSTEMEZSEK 

#ls /deneme > /dev/null 2&1
   
   burada ls deneme komutunun cıktısı varsada yada hatası varsa ekrana basma diyoruz 
   
   
   
   
   
   **UMOUNT
 ayırmak istediğiniz dizini kullanan tüm süreçleri ekranda gösterir. Böylelikle rahatlıkla yukarıdaki örnekteki gibi umount işlemini gerçekleştirebilirsiniz. fuser komutunun -km seçeneğiyle o dizini kullanan süreçleri öldürülebilir.
# cd /
# fuser /disk
/disk:                   78c
# fuser -km /disk
# umount /disk


** KABUK ÇIKIŞI ENGELLEME

ignoreeof: ignoreeof, kabuktan control-d tuş takımı ile çıkılmasını engeller. Yanlışlıkla basılan control-d ile sistemden anından çıkmak mümkün olduğu için kullanışlı bir tanımdır.
$ set -o ignoreeof
$ (control-d 'ye basin)
Use "logout" to leave the shell.
$ set +o ignoreeof
$ (control-d 'ye basin, sistemden hemen cikar)
$ ignoreeof=4
Yukarıdaki son örnekte 4 kere control-d tuşuna basılırsa kabuktan çıkılır.


 
 
 **DTSİS Web Sitesi Panel ve Şifresi
 
 https://ecres161.servconfig.com:2083/
 
 
 Kullanıcı: dtsisco
 
 Sifre: 1453546
 
 // Resetten kurtarma Uygulama durdurma //
 **
 killall S20start;/etc/init.d/app-run.sh stop;killall -2 val-watchdog;tail -n 1000 /mnt/mbfs/log/messages

 
 
 //* Restore resetlenme 
 
 restore yapınca YOCTO yazısı cıkar
 içinde parametre varsa FB501 filan büyüktür buyüzden sürekli reset yer...durdur ve parametreleri sil...
 
