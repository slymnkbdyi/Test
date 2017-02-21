**Githe eklendik



** Pallini bileti otobüste okutulunca ilk önce checkin yapıyor...ikinci okutmada ise NOT ALLOWED ZONE hatası veriyor 
** Server ile baglı degilken "Card is damaged" bir kart okutulup ardına normal kart okutulursa CLEAR ACTİVE BUFFER esnasında kart okumuyor .
** OVMC den oscvm settings ekranında ingilizce cevirmeler unutulmuş ..yunanca kullanımda .
**UL kartta oscvmde bir cihaza okutulan karta verilen olumsuz mesaj hafızada tutuluyor bundan sonra gelen bütün UL lere bu olmusuz msjı veriyor 
***Yeni ses formatları WAVE yi desteklemiyor diye logda hata basılıyor hatası var
*** MEtro sub da ...coklu okutma ekranı var olmamamlı 
**MISC options yunanca da ingilizce kalıyor 
**Hard Reset özelliği bozuk 
**Recover calısmıyor 
** yolcu coklu biniş yapmak icin secimi yaptı mesela 3 kişilik okutacak  kartında "insufficient balance " yazısı görüldü ve bıraktı gitti ..sonraki yolcu karıtını okutursa 3 kişi parası cekiyor o
** Kart okutması yarıda kalınca   baska oscvm ye okutulunca kart tanımıyor .sadece kartın bozuldugu oscvm tanıyor kartı 
** begin stage :1 end stage: 1 yok otobüste biniş iniş yok .... hava mtrosunda begin stage :12 var end stage :12 yko ..giriş var cıkış yapılamıyor 
**Parametrelere hala havaalanı icin 1-15 eklenmemiş..
**FB523 te 1-15 icin flatfare 1 olmalı 
**OVMC yunanca diller ikiside YUNANCA ..ingilizce bilen adam yunanca bilmiyorsa sıkntılı durum ...degismeli
**Cihazlar hat secili iken kapatıldı ..ovmc acılmadan oscvmler acılırsa hat secilmemiş halde acılıyor kart okumaz halde oluyor ..ovmc acılmadan kart okur hale gelmiyor
** Coklu kurulumdan aza gecince SAYAC sıfırlanmıyor ..olmayan oscvm nin 
** kurulum esnasında(3 lü krulum ) timeout replying uyarısı alırsa ovmcden hat seciliyor oscvmlere gönderiliyor .ovmc hattan cıkyor oscvmlere kart okur halde oluyor ..
**Recover yaparken oscvmde kötü DEBUG ile Grafik üst üste biniyor 
**ANVA 000 hattı secilince ..travel info boş oluyor normalmi ??
**Yunanca EXPİRE DATE ve   3d biletin Expire Date i ekrana sıgmıyor 
***Bus için : 2 li kurulumdan 1 li kuruluma geçilince hat seçtigimiz zaman ikiside hat seçiyor .     Kapanıp aclıılrsa 3.hat seçmiyor...fakat bi daha kapanıp acılırsa hat secili kart okur sekilde acılıyor 
**OVMC upload yada downloaddan yapıp bitince ekran normale gecmiyor  öyle kalıyor ..elle biz degistirmek zorunda kalıyoruz
**SAM yoksada OSCVM hat seciyor 
**Yolcunun Passi yoktu SVT ile odeme yaptı ve max svt ye ulaştı gün içinde pass yükledi ?? ne olacak biz direk pass ini başlatıyoruz ??
**ovmcden saati degistirince oscm baştan set oluoyr(fb dosyalarını parse ediyor ) ve olana kadar sürede kart okumuyor oscvmlere (((SAAT BOZUKSA Bİ KERE SET EDİLECEKMİŞ SADECE 1 KERE)))
**	slot1 de suburban 1 aylık var slot2 de aiprot1 1aylık….slot1 bitmedi …metrodan okuttun SVT aldık suburban airporttan cıkarsa ??   Slot1 ile çıkış yapıyor ..check out yapmalı??		   +++++  ++++	
*****	ERROR !!   Airport 1 m  , pallini (suburbanda bi svt bi pallini oluyor)		  +++++	      ++++
**SVT ile aiporttan binen bir yolcu eger maxSVT yi geçmişse check outta ucuz yolculuk yapıyor   ++++ 
**süresi biten bilete Not alllow zone diyoruz ..... atina bileti bitiyor SUBURBAN AİRPORTTA okututlunca not allow diyor EXPİRE demeli
**slot1 boş slot2 de suburban 6d var.....airportsub da check in yapılıp pallinide checkout yapmak isteyince check in yapıyor !!!!    +++++     +++
**SLOT1 : Pallini SLOT2 : 3d tourist var ..hava alanında pallini biterse 90 dk bitmeden 
slot2 başlaması dogrumu ? ne olacak bu durumda   -----     -----
**slot1 de pallini var .zone 1 de checkin yapıp zone2 de checkout yapmıyor .......pallini bileti ile check in yapıyor          +++++     ++++++
** infoda TRANSİT MODE CODE    % li yazıyor 	  
**HAVA ALANI AKTARMA HAKKI NE OLACAK..yolcu havaalanına geldi 90 dki icinde dönerse transfert mi sayılacak 
*Pallini 70,airport 70 yada airport round 70r ile eğer yolculuga hava alanından başlarsak...pallini70 ve air70 ile iki kez ...airport70r ile 3 kez seyahat edebiliyoz  
**Airport Round Trip DESFİRE İÇİN 2. tribi kullanma süresi 48 saat fakat ..saat 6 da okutlup aksam 20 de okutulursa SVT laıyor ...normalde 2.trip baslamalı  

------------------------------------------------------------------------
/** Drıver ID yunanca yanlış girilince altta çıkan uyarı hala taşmalar var.
//** Restore yapısı gözden gheçirilecek
//**Kontak yokken OSCVM off yapılıp cihazlar acılırsa oscvm acık kalıyor ..ovmc settingste ise oscvm power off 
//**OSCVM yunanca install ekranında "OSCVM NO "yazıyor yunancası yok 
//*drive Id 9000001 girince sistem yanlış isliyor 
//**ovmc hard reset calısmıyor
//**Aiprt 90 bileti ile metro zone 1 de checkin yapıldı hava alanında checkout yapıldı ...90 dakika bitmedi otobüse gecildi "NOT ENOUGH " demesi normalmi?
//** Information menusunda yunancada hala taşmalar var 
// value degismiyor? 300 e set ettim /data/config/main_config içinde kapanıp acılınca aynı 1500 oluyor
//**OSCVM power on/off çalışmıyor 
//**Busta 2 li kurulumdan 1 li ye gecilinnce 2.oscvm hala hat seciyor kart okuyor ..
//**Yolcunun kartı Blacklistte ve Gitti Para YÜkledi bu durum nolacak?
//** boarding+disembark=total fare degil hala 
//*airport roundu 4 triplik yaptım ...ultralight okudu fakat tribini 2 saydı ....Desfire okumadı trip2 den fazla olamaz dedi.(ınvalid device parameters dedi SVT alsa ya?)  (Aynı Durumu 3days turist icinde gördüm...fakat gün degisikiliğine problem yaratmıyır ULdede Desfire dada   )
//**FB539 a gerek varmı ????? (BEYTULLAH ABİYE SOR)
//**useYN özelliği Calısmıyor
//**Parametrelerde FB523ten same/other hepsini N yaptım farklı bir hat secince neden trANSFER COUNT artıyor 
 //**Yunancada Round bilet okutunuca "TRİP LEFT " ingilizce   

//**YUNANCAda Staff pin yanlış girilince ALTTA CIKAN UYARI SIĞMIYOR
//- Kontak kapandığında cihazın davranma durumları talebe göre incelenecek (kontak kapandığında hattan çıkılması ve kayıtlarını göndermesi)
//**OSCVM de hiç kurulum yapmadan  "Settings" ten "DOWNLOAD PARAMS "  secilince    CAN NOT SMC diyor (kurulum yapılmadı veya OSCVM ye baglı degil uyarısı alınsa daha iyi olur    ŞAYET  kurulum yapılsa bile OVMC kapalı ise yine Cannot SMC uyarısı veriyor  )
//*** update güncelleme özellikle hangi yöntem kullanılacak ...wifi ilemi usb mi sd card mı ?
//**Bus ve tramde  çoklu kurlumda azlı kuruluma geçilince kart okutma kayıtları sıfırlanmıyor kapanan cihazların ..OVMC kapanıp acılması gerekiyor 
//**Tramda make installationda iken hat seciyor 
//**tramda oscvm2 yi kontakla kapat,ovmc1 de hattan çık,ovmc2yi kontakla ac kontagı hemen geri kapa  -->bu dumda OVMC2 de hat secili iken OVMC1 hat secili DEĞİL !!
//**Wireles ekranında iken herhangi bir accespoint yokken connecte tıklanınca resetleniyor 
//**OSCVMde install yapınca ekran mavi oluyor 
//**yunancada staff loginde sifreyi yanlıs girince BUTONLAR arası sıklaşıyor 
 //**OSCVMs POWER çalışmıyor   
 //** Kayıtlar yollanınca WAİT DOWNLOAD da kalıyor 
//** Koropi SCVM sinde ekranda STATİON ID bölümünde "j" yazıyor 
//**   OVMC nin database i silinince sıfırdan baslıyor 
//* (SVT)  ile Bus ---> Airport ---> Bus  hava alanına bedava gidiliyor 
//** Airporta ulasım yapmıs adam 90 dakika icinde dönerse aktarma yapıyor CHECKIN ücreti almıyoruz???
 // **OVMC yunancada  ınformation da "SYSTEM INFO"NUN yunancası yazmıyor !!  
 // **blacklist TEST EDİLECEKMİ??
 // **wifi testinde serverla baglı oldugu halde 100 los görüldü ...--- işaretleri var
 
//** STAF LOGİNDE sifre yanlıs girilince ekran büyüyüor 
  //** OVMCye set default cekince kart okutulunca ovmc de artış gözlenmiyor YADA ovmc database i sıfırlanınca kart okutlulursa ovmc de artış görülmüyor 
  //- kontak off yapılıp OSCVM cihazları kapandıktan sonra contact on duruma getirildiğinde OVMC force olarak kapanıyor.
  //**OSCVM LCD on /off ters calsıyor 
//- OSCVM & OVMC haberleşmelerinde VEHICLE ID ve OVMC ID dikkate alınsa iyi olur.
  //***önce maintanance okutup sonra inspection okutulunca oscvm ekranı İNSPECTİON MODE diy yazmıyor ...ayar ekranında kalıyor ((SUNAY ABİYE SORULACAK   !!!!!)))     //JAE degismeli dedi 
  //**Ciha
  
  
zlardan SAM kart cıkarılınca iconlarda cıktıgı görünmüyor .Takılsada cıkarılsada SAM var görünüyor       //takılsa takıldıgını farkediyor fakat  çıkarıldıgını farkedemiyor ..kapatıp acmak geekiyor
 //**OSCVM volume "AUTO " secilince oscvm nin ses ayarı o an OVMC nin deki ses ayarına eşitlenmesi gerekmezmi ..illa OVMCden bir degistirme etkisi mi olması lazım 
//**Hat secili halde iken OVMC kapanır acılırsa  kayıtlar sıfır görünüyor (oscvm baglanana kadar öyle kalıyor ) 
  //- OVMC Information ekranındaki serial number ibaresi yanlış. Hardware ID bilgisinin yazılması daha uygun olur.
  // *** kart okutulduktan sonra inspection okutulursa 10 saniye ekran mavi oluyor sonra "INSPECTİON MODE " yazıyor 
 // **Chalkida 4.bölge ve bizim biletimiz yok öyle ....burada bizim sadece biletimiz okumadıgın görmek yetecekmi ??//suburban biletleri loutrulup okutulucak ve SVT okutulucak kontrol edilecek
  //***Tramda 2 li kurlumdan 1 li kuruluma geçince hala 2 oscvm var gibi gösteriyor ve ..kart okuma sayısını sıfırlamamıs oluyor o oscvm   // (JIRADA)
  // Busdada 2 li kurlumdan 1 li kuruluma geçince hala 2 oscvm var gibi gösteriyor ve ..kart okuma sayısını sıfırlamamıs oluyor o oscvm
//*Tramlarda ikinci OVMC kapatılıp acılır ve ilk OVMC kapatılır acılırsa ...OVMC 1 sadece kendi oscvmlerin görüyor oda kırmızı...2.OVMC ise sayacları sıfırlanmış sekilde sadece kendi oscvmlerini görüyor yeşil şekilde

  /** oscvm volum auto secili ve uyurzken ovmcde ses degistirilip oscvm acılırsa ovmcdeki ses ayarını almıyor oscvm güncellemiyor yani kapatmadan önce hangi ses ayarında ise öyle kalıyor 

//**örnegin yolcu suburban 15 günlük var ve gecerli ama adam otobüse bindi 15 dakika sonra ise suburbana bindi aktarma almamız mı gerekir yoksa suburbanı (VAZGECİLDİ)
  
  //**OSCVmler ingilzce iken ansızın kapatılırsa bazen yunanca acılıyor  MAKE INSTALLATİON yazıyor en az 2 kez gözlemlendi....hat secili iken böyle bir durum yok
  
  // OVMC mute ye alınıp  tekrar kaldırılırsa OSCVM nin ses ayarı yapılmıyor
  //** saat 12-18 aralıgı dısında SVT okutulamıyor ... STAGESETID=0 oluyor peaktime sorunu //parametreleri sorunlu 
  
  
///YUNANCA İNCELEME////

*Drıver Login- Staff Login  ekranında Driver ID boş girilince ingilizce uyarı veriyor 
*Drıver Login- Staff Login  ekranında en altta   TAP YOUR CARD ın yunancası ekrana sıgmıyor 
**Download ekranın da "configuring ıp "  ve "waiting download " gibi ingilizce uyarılar var ...baglanır indirirse indirip "APPLYİNG PARAMETERS " uyarısı ingilizce .....          
**settings  ekranı yarı inglizce yarı yunanca 
**settingsten download params   dersek    "WAİTİNG DOWNLOAD " uyarısı ingilizce
*OSCVM nin information tablarındanda yazılar sıgmıyor
*OSCVM settings ekranında taşlamalar cok fazla  
 ///Atina parametreleri için öneriler ///
 * Her stage in kendinde end stage i  olmalı .checikn yapılan yeden check out yapılabilmeli...örnek beginstage12 endstage 12 olmalı
 * EndStage 9 bütün stagelerde olmalı (metro için)

 **SAME VEHİCLE SAME ROUTE durumları ne olacak ??
 
 
 /*#Athens Bugs
### Donanımsal ve Boot Hatları ###
# - ÖNEMLİ!!! Otobüs setinin elektriği kesilip tekrar açıldıktan sonra bir cihazın açılmadığı görüldü. Turgay abi cihaz loglarını inceledi fakat sorunun kaynağını tam olarak tespit edemedi. Cihazın elektriği kesilip bir süre sonra takıldığında cihaz açıldı. Tekrar aynı test yapıldı cihaz yine aynı yerde kaldı. Cihaza test imajı atıldı.Açılış testinden ETH hariç geçti. Cihaza ilk elektirk vermede sol led yeşil yanıyor. SD ile test imajı atılıp USB ile son program yüklendiğinde led açılışta yanıyor fakat elektrik kesilmelerinde cihaz açılıyor.
# - USB ile imaj atılırken bir cihazın açılmadığı görüldü. Argede yapılan incelemede sorunun modül kaynaklı olduğu tespit edildi.
# - Kısa süreliğine elektriği kesilen cihazlardan 13 nolu cihazın açılmadığı i2c haberleşme hatası verdiği ### ERROR ### Please RESET the board ### görüldü.
# - uboot güncellemesi yapılan bir cihaz ile kart testleri yapıldıktan sonra OSCVM cihazının USBleri görmediği görüldü. İnceleme için Argeye verildi. [03.05.2016]
# - Watchdog testi yapılan 13 nolu OSCVM cihazı starting kernelde takıldı. [05.05.2016 - Logları mevcut]
# - USB ile OVMCye imaj atma (modülü sıfırlama/test imajı yükleme) işleminde 4 farklı tip USB ile imaj atılmaya çalışıldığında uboot_v1.03.40 yüklendikten sonra 1 USBnin imaj atamadığı görüldü (SANDISK:Başarılı, LEXAR:Başarılı, KINGSTON:Başarısız, Markasız:Başarılı)
# - Reset testine bırakılan 13 nolu cihazın lpc durumu incelkenecek 14.05.2016
# - 7 ve 25 numaralı OSCVM cihazının sürekli kendini resetlediği (uygulama açılmıyor [    4.190981] platform caam_sm: [0024] 1d 0a 8b ce 4c 3c 14 b6) 
# - 7 numaralı OVMC cihazı Server üzerinden App update işleminden sonra kilitlendi reboot edilen cihazın touchscreeni düzgün çalışmadı. Touchscreen entegresi değiştirilmesine rağmen cihaz aynı şekilde davranmaya devam etmiştir.
# - 7 nolu OVMC cihazı Fw update esnasında kilitlendi. Konsoldan reboot edilen cihaz açıldıktan sonra kendiliğinden resetlendi. Son açılışından sonra cihazın touchscreen özelliğinin çalışmadığı görüldü.

#To Do ...
- DHCP den ip isteme üzerine çalışma yapılması gerekmektedir.
- OBCH versiyon bilgisi OVMC information ekranına eklense iyi olur
- OVMC main_config ayarlarındaki OVMC_ID nedir?
- OVMC Configuration ekranındaki saniye bilgisi canlı değil.
- BUS/TRAM kurulumu yapılmış olan OSCVM cihazı farklı kurulum yapılmış olan OVMC cihazına takıldığında ip haberleşmesi sağlandığından herhangi bir uyarı vermiyor fakat hat seçilmek istenildiğinde hat seçmiyor. Uyarı verse iyi olur.
- OSCVM & OVMC haberleşmelerinde VEHICLE ID ve OVMC ID dikkate alınsa iyi olur.
- BUS/TRAM ve METRO/SUBURBAN kurulumlarında istenilen tipte parametre yoksa download işlemi başlamasın
- OVMCye son uygulamada calibrasyon eklense iyi olur
- Wifi ve Eth bağlantısı olmayan OVMC cihazı çok geç açılıyor.
- Install yapılan cihazlar sıfırlanmadan tekrar install yapılamasın. Buna bağlı olarak Set factory defaults seçeneği eklense iyi olur.
- TRAM configuration ekranında SECOND TRAM cihazlarını da açıp kapatılabilse iyi olur
- OSCVM configuration ekranından X ile çıklıdığında ayarları koruyor. Sadece OK ile çıkıldığında ayarları korusa daha iyi olur.



GÜNCEL HATALAR   "03.06.2016"

- Hat seçili ve içinde kayıt olan BUS kurulumlu OVMC kontağı kapatılıp 25dk sonra hattan çıkıldığında sunucuya bağlanmadığı, kayıtları göndermediği, Waiting for download ekranında kaldığı görüldü.     // (JİRADA)

- Bus App Fw update işleminde dosyalar indirildikten sonra update işlemi gerçekleşmiyor. Ancak bir süre sonra OVMC kendiliğinden kapanıyor tekrar açıldıktan sonra update işlemi başlıyor ve başarılı olarak tamamlanıyor.
- CAT6 kablolar OBCH kısımında oynatıldığında link down ve link up olduğu görüldü.
- Sıfır BUS kurulumunda 20m kablo ile 6 nolu OSCMV cihazı OVMC ile haberleşme sağlayamadı. Cihaz kablosu çıkarılarak tekrar açıldığında yine bağlantı kurulamadı. Kısa kablo ile bağlantı sağlandıktan sonra 20m kablo ile bağlantı başarılı olarak sağlanabildi.
- Yeni versiyonda eklenen installation statustan dolayı eski versiyonların üzerine yeni versiyon update yapılırsa cihazlar make installation durumunda açılıyorlar
- Eğer TRAM cihazında kayıt varsa ve bunları o an sunucuya aktaramıyorsa app fw update işlemi de yapmıyor.
- TRAM OVMC kayıtlarını gönderemediğinde tekrar hat seçilirse sayaçlar sıfırlanıyor. Gönderilmemiş kayıt bilgileri gözükse iyi olur.
- SCVM kurulumunda dowload complate dedikten sonra o şekilde kalıyor. Installation Success demiyor. Ana ekrana dönüldüğünde Out of services yazıyor.
- OVMC cihazı açılıp server bağlantısı sağladığında yeni parametre varsa indiriyor fakat parametre indirildiğine dair uyarı vermiyor.
- OSCMV cihazları güncelleme işlemi yapılıp kendiliğinden yeniden başlarken yeşil ledlerin sönmediği yada kırmızı olmadığı görüldü
- OVMC Configuration ekranındaki saniye bilgisi canlı değil.
- Hat seçili durumda iken cihazların hattan çıkmadan parametre dosyalarını indirdiği görüldü.
- Cihaz ilk kurulumda Authenticationu geçememesine rağmen wifi kapanıp açıldığında parametreleri indirdiği görüldü.

- 1.0.1.41-1.0.1.44 51 BUS ve 51 TRAM kurulumu yapılmış iki OSCMV aynı OVMC cihazına (ip çakışması var) taklıdığında herhangi bir uyarı vermiyor. Cihazlardan biri çıkarılsa dahi diğer cihaz resetlenene kadar bağlantı sağlanamıyor.
- 1.0.1.41-1.0.1.44 TRAM First cihazı kurulup hat seçtikten sonra TRAM Second install yapıldığında parametreler indirilmeden OVMC cihazının hat seçtiği görüldü fakat OSCVMler hat seçmedi
- 1.0.1.40-1.0.1.43 üst üste BUS kurulum testinde en son TRAM olarak kurulmak istenen OSCVM cihazının INSTALLING ekranında kaldığı görüldü.
- 1.0.1.40-1.0.1.43 Download işleminde OVMC cihazının downloada devam edemediği ve hata vermediği görüldü. Cihaz 33/1392 KB de takıldı. Loglarda NO NEW FILE TO DOWNLOAD gözükmesine rağmen ekrana yansıtılmamıştır.
- 1.0.1.34-1.0.1.37 versiyonunda 4 lü BUS kurulum yapılmış olan OVMC ve OSCMV cihazlarından 20m kablo ile bağlanmış olan 1 ve 3 nolu OSCMV cihazlarının bağlantılarını kopardığı ve tekrar bağlanmadıkları görüldü. Loglardan bütün cihazlara ping atılabildiği görüldü.    // (JİRADA )



#20160618
- TRAM kurulumunda second OVMC ilk açıldığında parametreleri indirdikten sonra OSCVM cihazlarına parametrelerin gitmediği görüldü.

#20160615
//- Durak bilgisinin bulunulan durak hücresine sığmadığı görüldü.
- kontak off yapılıp OSCVM cihazları kapandıktan sonra contact on duruma getirildiğinde OVMC force olarak kapanıyor.
- Reader güncelleme testinde cihazların uygulamalarını kapattıktan sonra o şekilde kaldıkları görüldü. Reader ACK dönmediği görüldü.


#20160601
- OSCVM cihazı insatallation yapılıp WAITING OVMC INSTALLATION ekranında iken parametreleri yüklenmiş olan OVMC cihazı ile haberleştiğinde parametreleri aldığı ve hat seçildiğinde hat seçtiği görüldü.
- Aynı cihaz ile SCVM kurulumunda parametreler her defasında tekrar indiriliyor.

#20160530
- TRAM kurulumlu first OVMC cihazının OBCH bağlantısının kırmızı olduğu görüldü. Switch konumu doğru.


 

#20160526_GÜNCEL_HATALAR

- TRAM cihazlarının elektriği kesildiğinde sayaçların sıfırlandığı görüldü.

- L5 BUS kurulumlu OVMC cihazı hat seçili ve wifi bağlantısı olmasına rağmen sunucuya bağlanmayı denemediği görüldü.

 

 
#20160525_GÜNCEL_HATALAR

- Bus App Fw update işleminde dosyalar indirildikten sonra update işlemi gerçekleşmiyor.

                > Dosyalar sunucudan indiriliyor fakat OSCVM cihazlarına gönderilmeden OVMC kendiliğinden kapanıyor   //(JİRADA)

                > Açılan OVMC dosyaları OSCVM cihazlarına gönderip kendisi de update işlemi başlatıyor ve update işlemi başarılı olarak tamamlanıyor.

- Download işleminde OVMC cihazının downloada devam edemediği ve hata vermediği görüldü. Yapılan İşlemler;

              

                > Cihaz download yaparken Wifi modem kapatılıp açıldı. OVMC Download from Server ekranında kaldı ve oradan çıkmadı tekrar sunucu bağlantısını sağlamadı. Download ekranında kaldığı için ekrandan çıkılamıyor.

                !!! Aynı durumu terminalden ifdown wlan0 ve ifup wlan0 komutları ile DMC de deneyeceğim  // İfup ilede wifiyi keapatarak denedim ..wifi acıp kapama uzun üsrsede geri baglanıp indirmeye devma edioyr.ama wifi gelmese ekrandan cıkmak imkansız !!! //(JIRADA)

- TRAM First cihazı kurulup hat seçtikten sonra TRAM Second install yapıldığında parametreler indirilmeden OVMC cihazının hat seçtiği görüldü fakat OSCVMler hat seçmedi. Sonradan kurulan TRAM cihazının arka planda parametreleri indirmeye devam ettiği görüldü.

- TRAM Appfw update işleminde hata görüldü

                > L10 First TRAM cihazından hattan çıkış işlemi yapıldı. L10 parametreleri indirdi ve OSCVMler update işlemini yaptı fakat OVMC update işlemini yapmadı.

                > L6 Second TRAM cihazı parametreleri indiremedi kayıtlarını gönderemedi. Eğer TRAM cihazında kayıt varsa ve bunları o an sunucuya aktaramıyorsa app fw update işlemi de yapmıyor.

                > OVMC cihazlarının parametreleri indirdiği OSCVM cihazlarına gönderdiği L11 nolu OSCVM cihazı hariç diğer OSCVM cihazlarıın güncellendiği görüldü.

                > OVMC cihazlarının güncellenmediği görüldü.

- TRAM first installation işleminde download edilen parametrelerin OSCVM cihazlarına eksik gönderildiği yada hiç gönderilmediği görüldü.

- App Flash atılan OSCVM cihazının "[ 1878.583662] qt1070 1-001b: can not read register, returned -5" uyarısı verdiği görüldü

- Cihazlar sunucudan saati güncellemelerine rağmen OBCH tan kapatılan cihazlar açıldığında son saati korumadıkları görüldü.

 

20160521 > 1.0.1.57-1.0.1.64

- Parametre güncelleme işleminden sonra OVMC cihazının parametreleri OSCVM cihazlarına gönderemediği ve kendini resetlediği açıldıktan sonra indirilen parametreleri OSCVM cihazlarına gönderdiği görüldü.

- OVMC cihazında wifi bağlantısı kesilip bağlandığında sayaçlar veri gosterirken ve hala hat seçili iken kayıtları bizim servera gönderdiği görülmüştür ve OVMC records iconu veri yok olarak gözükmektedir.

- Kurulum işlemi kontak olmadan başlatıldığında kurulum tamamlanamadan cihazlar kapanıyor. Kurulum esnasında kontak bilgisi dikkate alınmasa iyi olur.

- Kurulum esnasında parametreler OSCVMlere gönderilemeyebiliyor. Kontak vererek açılan bazı OSCVMlere de parametrelerin gitmediği görüldü.

 

20160520 > 1.0.1.57-1.0.1.64



- Kontak yokken OVMC installation yapıldığında parametreler indirilip OSCVMlere gönderilemeden OSCVMler kapanıyor. OVMC açık iken kontak bilgisi değişse bile OSCVMler uyandırmıyor. */
 
 
 
 //#20160607
//- Sub cihazında check in yapılan kart metro cihazında check out yapabiliyor. Ama tam tersi olmuyor.

//#20160606
//- SCVM olarak kullanılan L15 numaralı cihazın ethernetinin bağlanmadığı görüldü. Yapılan incelemelerde ethernet config dosyasının device type 3 ü değerlendirmediği görüldü.

 
 
 
 
 
 //- Set Defaults komutunda parametreler silinmiyor.   //(JİRADA)   

//- OVMC make installation durumunda iken kontak takılı olmamasına rağmen kontak var olarak algılıyor.    / (JİRADA )
 
 
 
 
 //***Kurulumdan sonra 1.oscvm statistic bilgiler sıfırlanmamış 2.oscvm nin ise sıfırlanmıs olarak baslıyor 
 
 
 /*OSCVM install olup IP atanmamasına ragmen kart okur duruma geliyor ..ve kayıtlarda o OSCVM nin kayıtlarında OSCVM ID 0000000 görünüyor      //   (JİRADA )

//**Eğer OVMC kayıtları gönderemedi yada  sonradan gönderdi ise yeni hat secmede sayaçlar  sıfırlamıyor..kayıtları gönderse bile sıfırlanmadığı gözleniyor özellikle OSCVM2 de  bu durum gözleniyor  // (JIRADA)

//**Set Defaults secenegi kullanılınca cihaz açılıp kapanmıyor ve içindeki parametreler silinmiyor (OVMC dede OSCVM dede aynı durum var )  //  (JIRADA )


 
 
 
 //****** set default secilince  /opt/data/config icindeki server ıp 10.77.134.176  iken 192.168.062  oluyor  ve bir daha serverla baglatı yapılıp baglantı kurulama(sonra bakılacak)
 
// *** Hat secili iken ovmc eksik dosya varsa indirmiyor hatan çıkmayı bekliyor .hattan çıkılınca eksik dosya varsa indiriyor fakat oscvmlere yollamıyor  .oscvmlere illaki kapanıp açılmalı öyle yolluyor 
 
 
 //**FT parametre dosyası FT523 teki traff 01 mean  01    ve traff 01 mean 04   hangi ulaşım tipi oluyor  (aynı durum suburbandada var )
 
 
// **Parametre dosyası FB/M 526/626 dosyasındaki fare -20 hatası hem suburban için hemde metro için hala devam etmektedir 
 
 
 
 //- Farklı kart geldiğinde kart okuma işlemi biraz yavaş gibi
//- Bazı cihazların UL kartları okumadığı loglarda Readerin kilitlendiği görüldü
 
 
 




//***** Bus kurulumda oscvm ye STATION STAFF okutulunca  "ınsuffucient balance" diyor 
 //****ovmc ile oscvm baglantı kurdugu halde "commucation error hatası " verioyr :
 


 
// ****DRİVER CARD tram ovmcde tanımıyor 
 
 
 
 

// *airport 70R UL de ikinci trip 0 : 0 diye baslıyor      // (JİRADA)   

//*Desfire Kartlarda Slot1 de geçerli ve yeni bir kart varken slot2 de izinsiz,geçersiz bir kart yüklü ise slot1 deki kartı kullanmaya izin vermesi gerekirken .Slot1 i kullanmaya izin vermediği görüldü  //   (JIRADA)

   
   
   
//***UL  3Days Tourist bus,metro da BİTMİYOR       (DONEE !!!!)



//*** OVMC ekranında hat secili halde iken Gelecek istasyonun adı bulunduğu alanda sola yaslı yada tam ortada ise o istasyona gelindiğinde CURRENT STATION ismi ya görnmüyor yada son birkaç harfi görnüyor(JİRADA)

//****Bazı rotalarda çıkmak isteyince "Are You Sure You Want to Finish Roue " uyarısına "No" Denmesine Rağmen Rotadan Çıkıyor .
 //Please select route ekranına dönüyor ve OVMC nin ilk tuşu çalışmaz hale geliyor yani bir daha rota seçme işlemi gerçekleştirilemiyor

 
 
 
 //**Downloadda iken wifi giderse ekrandan cıkılamıyor ...eger baglantı ifdown wlan0 ile kesilmişse ifup yapılınca indirme devam ediyor. yoksa diger türlü wifi ac kapa durumunda indirme devam etmiyor 



 
// **3d touristin tribi bitince "INSUFFİCENT BALANCE" diyor (suburban yada hava alanında )
 

 
 
//****ovmc kapanıp acılınca durak isimleri düzgün çalışılıyormu
 
 
 
 
 //**Set dafault yapınca cihaz MAKE INSTALLATION ekranına geliyor hic bir tuşu calısmaz oluyor  ekran donuyor 
 
 
 
// 1) buslarda   SVT için   checkin :9 checkout :9  olmadıgından check out yapılamıyor 
 
// 2)tramda stage 9 olmadıgı icin ne check in ne check out yapılabilmekte 
// 3)metro ve suburban icin :  holder profile hatalarımız var ..fare i bulamıyoruz 
 
 
// ***bazı cihazlarda hat seciminde oscvm kart okr duruma geciyor ama ovmc hala hat secme ekranın kalıyor hat secilmemiş gibi sürekli "confirm" yazısına basılıyor 
   // örnek : device 10000020    (hat sec cıkış yap tekrar sec bu durum oluşuyor )

//*** "disembark must be made first " uyarısı ekrana sıgmıyor



//**desfireda 24h pass i metroya okutup check out yapmadan busa gelince  "disembark " uyarısı vermek yerine check in veriyor //	 
//	metrodan checkoutsuz cıkış sonrası ulaşıma izin verilmicek ama verliyor desfireda .. özellikle trama gelince
//	1)metrodan suburbana checkoutsuz geçilebiliyor.... suburbandan metroya checkoutsuz geçilemiyor

//**airport 90M ,round   kalan süre :11321817 yazıyor 


//**boardretaqpostime ile disembarkpostime arasında "ONLY BOARDİNG CAN MADE " diyor

//**UL de round karltarda checkin yada checkouttan sonra kart bozuluyor .."UNSUPPRTED CARD"  hatası verioyr ..certifiate hatası 

//*** Desfire kartlarda suburda yada checkoutsuz diger araclara gecişe izin verimlemesi gerekmekte oldugu halde izin verilmektedir 





//***slot1 de athens 24 saat var  slot2 de  1aylık airport var.... slot1 airport subta gecerli olmaması normal peki slot1 bitince ...suburban aiprortta neden gecerli olmuyor slot2

//****  SINIRSIZ TRANSFER hakkı var 90 dakika bitsede bitmiyor...iki metro duragında tespit edilen   (TRİPSTARDATE bozuluyor checkoutta)   //HATA DEGİL AYNI ARACTA AKTARMA HAKKI YOK //



//***SCVM ilk kurulumda travel infoda    "mean code " ini "<\"   gibi sacma degerler yazıyor

//***OVMCde "settings "    OSCVMde "configuration "  tutarsızlık var ve kılavuzlarda "configurtation " yazıyor 


 //***Hattan çıkılıp  UL kart okutulunca sistem resetleniyor




 


 
 
 
 
 
 
 
 
 
 
 











































































































































































//- Finansal records özelliği çalışmıyor [1.0.1.42-1.0.1.46]
//- TRAM kurulumlu OVMClerden hat seçildiğinde hat bilgisi diğer OVMC cihazında Current Station olarak gözükmektedir.
20160519

//- Kontak kapatıldığında BUS OVMC cihazının 40dk geçmesine rağmen kapanmadığı görüldü.     (JİRADA)
//- Hat seçili ve içinde kayıt olan BUS kurulumlu OVMC kontağı kapatılıp 25dk sonra hattan çıkıldığında sunucuya bağlanmadığı, kayıtları göndermediği, Waiting for download ekranında kaldığı görüldü. (JİRADA)

20160518
//- BUS hat seçiminden sonra 4. ve 3. OSCMV cihazlarına kart okutulduğunda sayacın artmadığı görüldü.
//- Bus App Fw update işleminde dosyalar indirildikten sonra update işlemi gerçekleşmiyor. Ancak bir süre sonra OVMC kendiliğinden kapanıyor tekrar açıldıktan sonra update işlemi başlıyor ve başarılı olarak tamamlanıyor.
//- CAT6 kablolar OBCH kısımında oynatıldığında link down ve link up olduğu görüldü.

20160517
//- Sıfır BUS kurulumunda 20m kablo ile 6 nolu OSCMV cihazı OVMC ile haberleşme sağlayamadı. Cihaz kablosu çıkarılarak tekrar açıldığında yine bağlantı kurulamadı. Kısa kablo ile bağlantı sağlandıktan sonra 20m kablo ile bağlantı başarılı olarak sağlanabildi.
//- Yeni versiyonda eklenen installation statustan dolayı eski versiyonların üzerine yeni versiyon update yapılırsa cihazlar make installation durumunda açılıyorlar
//- OSCMV cihazlarına USB ile imaj yüklendiğinde bazen SAM kartı görmediği oluyor.
//- Eğer TRAM cihazında kayıt varsa ve bunları o an sunucuya aktaramıyorsa app fw update işlemi de yapmıyor.
//- TRAM OVMC kayıtlarını gönderemediğinde tekrar hat seçilirse sayaçlar sıfırlanıyor. Gönderilmemiş kayıt bilgileri gözükse iyi olur.
//- SCVM kurulumunda dowload complate dedikten sonra o şekilde kalıyor. Installation Success demiyor. Ana ekrana dönüldüğünde Out of services yazıyor.
//- OVMC cihazı açılıp server bağlantısı sağladığında yeni parametre varsa indiriyor fakat parametre indirildiğine dair uyarı vermiyor.
//- OVMC information ekranında OSCMV param versiyon bilgisi yanlış gösteriliyor. SON PARAMETRE GÜNCELLEME ZAMANI GÖSTERİLİYOR
//- OSCMV cihazları güncelleme işlemi yapılıp kendiliğinden yeniden başlarken yeşil ledlerin sönmediği yada kırmızı olmadığı görüldü
//- OVMC Configuration ekranındaki saniye bilgisi canlı değil.
//- Hat seçili durumda iken cihazların hattan çıkmadan parametre dosyalarını indirdiği görüldü.

20160516
//- Cihaz ilk kurulumda Authenticationu geçememesine rağmen wifi kapanıp açıldığında parametreleri indirdiği görüldü.
//- 6 nolu OVMC cihazına bağlı olan 20, 21 ve 22 nolu OSCMV cihazları 2. update işlemini başarılı olarak tamamlamalarına rağmen 3. update işleminden sonra sürekli resetlendikleri görüldü. HATA 1.0.1.52-1.0.1.57 VERSİYONUNDA DÜZELTİLDİ

20160514
//#13.05.2016 saat 21:28 civarında tahminen elektriklerin kesildiği düşünülmektedir. Sabah incelemelerinde aşağıdaki durumlar görülmüştür.
//- 6 nolu TRAM OVMC cihazının 20(F1), 21(F2), 22(F3)(installation esnasında bağlantı kurulamamıştı) ve 25(S1)(uygulama açılmıyor) numaralı OSCMV cihazları ile haberleşmediği 26(S2) ve 27(S3) ile haberleştiği görüldü. Bağlanmayan cihazlar (OSCMV) tekrar installation işleminden sonra bağlandılar. 
//- 7 nolu BUS OVMC cihazının 23, 5, 6(installation esnasında bağlantı kurulamamıştı) ve 7(uygulama açılmıyor) numaralı cihazlar ile haberleşmediği görüldü. 
//- OSCMV cihazları install edildikten sonra OVMC install işlemi başarısız olur ve cihazlar kapanıp açılırsa OVMCden tekrar install işleminde fail oluyor. Ancak OSCMVler tekrar instal eidilip OVMC install edilirse o zaman kurulum tamamlanıyor.

20160505
//- SCVM cihazı kurulumdan sonra yeniden başlatılırsa ip adresini kaybettiği ve bundan dolayı sunucuya bağlanmadığı görüldü

20160504
//- TRAM ticazlarda her OVMC kendi sayaçlarını gösteriyor diğer OVMCnin sayaçlarını göstermiyor
//- OVMC kapandığında sayaç sayısını unutuyor	
//- OVMC kapanıp açıldığında OSCMVlerden kayıtları çekmiyor yada OSCMVler kayıtlarını göndermeiyor

20160502 
//- 1.0.25 OSCVM 1 nolu cihazın UL kartı okumadığı görüldü. Logları mevcut (COM1 ilk kart okuma logları). Cihaza Desfire kart okutulduğunda UL kartları da okumaya başladığı görüldü    (JİRADA)
//- 1.0.1.41-1.0.1.44 51 BUS ve 51 TRAM kurulumu yapılmış iki OSCMV aynı OVMC cihazına (ip çakışması var) taklıdığında herhangi bir uyarı vermiyor. Cihazlardan biri çıkarılsa dahi diğer cihaz resetlenene kadar bağlantı sağlanamıyor.
//- 1.0.1.41-1.0.1.44 TRAM First cihazı kurulup hat seçtikten sonra TRAM Second install yapıldığında parametreler indirilmeden OVMC cihazının hat seçtiği görüldü fakat OSCVMler hat seçmedi
//- 1.0.1.40-1.0.1.43 üst üste BUS kurulum testinde en son TRAM olarak kurulmak istenen OSCVM cihazının INSTALLING ekranında kaldığı görüldü.
//- 1.0.1.40-1.0.1.43 Download işleminde OVMC cihazının downloada devam edemediği ve hata vermediği görüldü. Cihaz 33/1392 KB de takıldı. Loglarda NO NEW FILE TO DOWNLOAD gözükmesine rağmen ekrana yansıtılmamıştır.
//- 1.0.1.34-1.0.1.37 versiyonunda 4 lü BUS kurulum yapılmış olan OVMC ve OSCMV cihazlarından 20m kablo ile bağlanmış olan 1 ve 3 nolu OSCMV cihazlarının bağlantılarını kopardığı ve tekrar bağlanmadıkları görüldü. Loglardan bütün cihazlara ping atılabildiği görüldü.  (JİRADA )
//- Wifi kapatıldığında 1 nolu OVMC cihazın wifi bağlantısını koparmadığı görüldü. //Cihaz Yunanistana Gönderildi
//- Farklı kart geldiğinde kart okuma işlemi biraz yavaş gibi
//- Bazı cihazların UL kartları okumadığı loglarda Readerin kilitlendiği görüldü

//- 1.0.1.41-1.0.1.44 SCVM kurulumunda aynı ip ile 2 cihaz kurulabiliyor. HATA DÜZELTİLDİ 1.0.1.45
//- 1.0.1.41-1.0.1.44 TRAM kurulumunda bir OVMC cihazının arızalanması durumunda diğer OSCMV cihazları hat seçmiyor. NORMAL HABERLEŞME İŞLEMLERİ OVMC ÜZERİNDEN YAPILIYOR
//- 1.0.1.41-1.0.1.44 Hattan çıktıktan sonra WAITING FOR DOWNLOAD ekranının timeout süresi yok
//- 1.0.1.41-1.0.1.44 Daha önce installation işlemi yapılan cihazlara USB ile yeni versiyon yüklemesi yapıldığında OBCH üzerindeki 3 ve 4 numaralı ledlerin yeşil yandığı OBCH düğmesine basılarak kapatılmasına rağmen ledlerin sönmediği ancak OBCH elektriği kesildiğinde söndüğü görüldü.
//- Wifi üzerinden fw_update işleminden sonra bir cihaz açılmadı.
//- TRAM kurulumlu cihazların kayıtlarını göndermediği görüldü
//- OVMC ile cihaz sıfırlanmadan üst üste kurulum işlemi yapıldığında DMC TIMEOUT oluşuyor fakat hat seçip çıktığında veri gönderimi başarılı tamamlanıyor.
//- 1.0.1.39-1.0.1.42 TRAM kurulumlu cihazlarda 2 OVMCden biri hatta değilken diğer OVMCden hattan çıkış işlemi yapıldığında hatta olmayan OVMCnin waiting for download ekranında kaldığı back tuşunun ve diğer tuşların işe yaramadığı görüldü.

20160430
//- 1.0.1.39-1.0.1.42 ilk kurulumda OBCH kırmızı kalıyor. DAHA SONRA YEŞİLE DÖNÜYOR
//- 1.0.1.39-1.0.1.42 Başarılı olarak kurulum işleminden sonra OBCHın OVMC ledi yeşil yanarken OSCMV ledleri kırımızı yanıyor. Daha Sonra kendiliğinden yeşile dönüyor. NORMAL
//- 1.0.1.39-1.0.1.42 TRAM kurulumu yapılmış cihazlardan bir adet OSCMV cihazının elektriği kesilirse OVMC resetleniyor HATA DÜZELTİLDİ

20160418
//- Aynı IP olan iki cihazın bağlandığı OVMC cihazı hattan çıkıldığında 1 cihazın hattan çıkmadığı görüldü. Ayar arayüzüne de girilemiyor. YENİ HATA YAZILDI
//- TRAM olarak kurulmuş olan OSCVM cihazları ISTALLATION ekranına girildiğinde first mü yoksa second mu olduğu görülmüyor. HATA DÜZELTİLDİ
//- OVMC ilk kurulumda dosya indirme tamamlanamazsa çıkış (4.tuş) işe yaramıyor iptal tuşu da bulunmuyor. HATA YENİ VERSİYONDA TEKRAR OLUŞTURULDU VE TEKRAR NOT EDİLDİ TAKİBİ ORADAN YAPILACAK
//- Wifi üzerinden FT dosyalarını download edilemiyor. HATA DÜZELTİLDİ
//- Staff Login ekranında işlemlere devam ederken 1 nolu tuşa basılması durumunda driver login açılmaktadır. Ana ekrana düşmeden açılmasa daha iyi olur. HATA DÜZELTİLDİ

20160417
//- Kayıt aktarımında server hata verdi. D:\ClientDownload klasörünü aramakta ve dosyaları oraya indirmektedir.
//- Server hata verdikten sonra OVMC cihazı Wifi bağlantısı kopana kadar tekrar bağlantı kuramadı. HATA TEKRAR GÖRÜLMEDİ 1.0.1.41-1.0.1.44
//- Gerekli ayarlamalar yapıldıktan sonra OVMC configuration menüden OSCVM ses ayarları değiştirlmesine rağmen gerçekte OSCVM sesi hiç değişmediği görüldü. OSCVM ses ayarı auto moduna alındığı ayarları koruduğu görüldü.
//- Gelen data içeriklerini nasıl göreceğim???
//- Hattan çıktıktan sonra wifi bağlantısı olmamasına rağmen OVMC "waiting for download" ekranında kalıyor. HATA DÜZELTİLDİ 1.0.1.41-1.0.1.44
//- Süresi Dolan kart için Fail uyarısı veriliyor (Kartın kullanım süresi doldu mesajı olsa daha iyi olur)
//- Configuration tarih/saat kısmında tuşlar nümerik görev görüyor. Oraya tıklanıldığı farkedilmez ise configuration ekranından çıkılamıyor. HATA DÜZELTİLDİ
//- Uzun süre wifi bağlantısı kuramayan cihaz wifi bağlantısı yaptığında test sunucusuna bağlantı sağlamadı. Cihazlar yeniden başlatılınca bağlantı sağlandı. HATA DÜZELTİLDİ 1.0.1.41-1.0.1.44
//- Cihazlar kapanıp açıldığında wifi bağlantısı var ise kayıtları göndermiyorlar. Hatta giriş çıkış işleminden sonra kayıt gönderiyorlar. SCVM CİHAZLARI ANINDA KAYIT GÖNDERİRKEN BUS VE TRAM CİHAZLŞARI HAT ÇIKIŞINDA KAYITLARI GÖNDERİR
//- OVMC ilk kurulum download işlemi başladıktan sonra 8 parametrenin download edildiği görüldü fakat bu 8 parametre ne OVMCde nede OSCMVde görülmemektedir. PARAMETRELER TAM OLARAK İNDİRİLMEZ İSE İNDİRİLEN PARAMETRELER DE SİLİNMEKTEDİR
//- Server uygulaması ile client bağlantısının koptuğu fakat sonra yeniden bağlandığı görüldü HATA DÜZELTİLDİ
//- "Select Route" ekranında 2. hatta tıklandığında görüntüde farklılaşma görülüyor. HATA DÜZELTİLDİ
//- TRAM kurulumu yapılmış cihazlarda select route işlemi sadece aynı OBCHa bağlı olan cihazlara gönderiliyor. Diğer OBCHtaki cihazlara gönderilmiyor. HATA DÜZELTİLDİ
//- 1.0.25 versiyonu açılış ekranında 1.0.24 yazıyor HATA DÜZELTİLDİ
//- TRAM kurulumunda okutulan kartlar fail uyarısı veriyor HATA DÜZELTİLDİ

20160416
//- 1.0.25 OSCVM resetlendiğinde OVMCde hat seçili ise otomatik olarak hat seçse iyi olur.
//- 1.0.24 DMCden download işleminden sonra driver login işleminden sonra hat listesi görülmüyor DOĞRU CİHAZ ID GİRİLMEMESİ DURUMUNDA BU DURUM İLE KARŞILAŞILIR
//- 1.0.24 Hat seçim ekranında eğer hat yoksa confrim butonuna basıldığında OVMC resetleniyor HATA DÜZELTİLDİ
//- 1.0.24 Second TRAM install yapılan cihaz DMCden download işleminden sonra Driver Login girişi yapılamıyor. HATA DÜZELTİLDİ

20160410
//- Tekrar setup işleminde finish denildiğinde cihazların hemen bağlantısını koparamadığı fakat sonra bağlantısını koparıp açtığı görüldü. Fakat bu durum COMMUNICATION ERROR WITH hatasının alınmasına ve setup işleminin başarılı olarka tamamlanmamasına vesile oluyor.
//- TRAM setup seçildiğinde SET IDs ekranında 4 cihaz seçilebilmektedir. eğer 4 seçilip setup işlemine devam edilirse kurulum fail vermektedir. SET IDs ekranında 4 seçeneği kaldırılsa iyi olur. HATA DÜZELTİLDİ
//- Daha öce full setup yapılmış olan OSCVM cihazları sırası ile OBCH'a bağalanarak sıfır OVMC den sırasıyla 1,2,3,4 BUS setup yapıldığında 2. cihaz ve sonraki her cihaz kurulumunda download ekranından sonra COMMUNICATION ERROR WITH uyarısı verdiği görüldü. Hatadan sonra kurulum tekrarlandığında kurulum başarılı olarak tamamlanmaktadır. HATA DÜZELTİLDİ -> OVMC_1.0.1.37&OSCVM_1.0.1.40 versiyonunda 
//- TRAM kurulumunda her iki cihaz da second olarak ayarlandığında ip çakışmalarından sonra bir cihazın OVMC ler kapatıldığında bağlantısını koparmadığı görüldü. HATA DÜZELTİLDİ 1.0.1.39-1.0.1.42
//- Daha önce BUS -> TRAM setup yapılan 3 OSCVM cihazının setupları değiştirilip BUS setup yapıldığında installation fail diyor fakar OSCVM1,OSCVM2,OSCVM3:SUCCESS diyor HATA YENİ VERSİYON İÇİN TEKRAR OLUŞTURULDU
//- Parametre indirilmiş olan OVMC&OSCVM cihazlarına cihaz ilave edildiğinde yeni cihaza parametrelerin gönderilmediği görüldü. HATA DÜZELTİLDİ 1.0.1.39-1.0.1.42
//- Uzun Teste bıraklılan cihazlarda 20:30 - 14:00 arası kilitlenme görülmemiştir. 

20160409
//- Kurulum yapılmış olan OVMC+4*OSCVM ve OVMC+2*OSCVM Uzun süreli teste bılakıldı.  ---Hata görülmedi
//- OSCVM cihazlarına kurulum işelmi tekrarlandıktan sorna OSCVM cihazlarında haberleşme problemi görüldü  ---Hata giderildi (Türker)
//- OSCVM & OVMC Kurulum işelmi tamamlandıktan sonra OVMC'nin elektriği kesildiğinde OSCVM cihazlarının bağlantısını koparmadığı görüldü  ---Hata giderildi (Türker)
//- OSCVM & OVMC Kurulum işlemi tamamlandıktan sonra kuruluma OSCVM ilave edilmeye çalışıldığında hata görülebilmektedir.   ---Hata giderildi (Türker)

20160407
//- OSCMV Kurulum işleminde finishin üzerinde iken 4. tuşa basıldığında uygulamanın resetlendiği görüldü.  ---Yazılım güncellendi (Onur)

20160406
//- Yüklenen imajda tuşlar basmıyor  ---qt1070 ayarının 5 ten 100 e alınması gerekiyor
//- Tuşlar kendiliğinden basma durumları görülüyor  ---Donanımsal ve ayar dosyası ile gerekli ayarlar yapıldı
//- Tarih Saat bilgisi yanlış  ---Tarih saat kore verilerine göre alınıyor.







//#Ekran Staff Loginde İken Eger Hat Seçilirse TAP YOUR CARD Yazısı Görüntülenmiyor   (onura bildirdim düzeltildi)  ++


//#Ekrandaki Versiyon ile informationun içindeki versiyon bilgisinin uyuşmamması(türkere söyledim düzeltilecek ) ++




//#Aynı ID li iki cihazla Kurulum yapmaya çalıştıktan sonra Hat seciminie gidersek hat seciliyor o ekranda kalıyor ve Buttonlar çalışmaz oluyor .OVMC ye reset atmak zorunda kalınıyor (jirada  http://wan2.dtsis.com:58080/browse/AP-1199)


//#SCVMde PIN  ekranından Çıkış Yapılamıyor.Make Installa  Dönüş Yapılamıyor   (jirada  http://wan2.dtsis.com:58080/browse/AP-1200  )++

//# OSCVM active durumu hatalı :  ilk 4 lü kurulumda 2 cihaz varken      

               //   *V4 tıklanınca OSCVM 2yikapattı  
				

//#OSCVMde mesela 4 cihaz varken biz OVMCden 2 tanesini calışssın diye 2 tanesi pasifken sistem tamamen elektriği kapatıp açınca bütün OSCVMler mi açılmalı yoksa sadece işaretli cihazlar mı?(SORULACAK SUNAY ABİYE)   
                 
		/*		 *Olması Gereken Son hangi ayarda bırakıldı ise o ayarda açılmalı 
				 (OSVM Activede AYAR KORUMA hatası ) (jirada  http://wan2.dtsis.com:58080/browse/AP-1201)
				 
				 
				 
				 
//#Tram kurulumunda OVMC nin ikisininde IDsi aynıysa  oscvmlerin ledleri kararsız yanıyor karışık yanıyor yeşil kırmızı karışımı
                   
				   


//#  image için Usb taktım cihaz kapandı açılmadı elargede modül bozulduğu belirtildi 				   
				   




//V38				   


 /*#Kurulum Sonrası OSCVM ye Dosyalar Gitmiyor ..Ancak Kurulumdan sonra tekrar oscvm kurulumu Yapılırsa Dosyalar Gidiyor 
 
 
 #Set Date Time da Hala Tuşlar Çalışıyor 
 
 

 
 
 
 
//v39


#oscvm active tamamen kapanmış


# OVMC saati tarihi degiştirlmesine ragmen bileti dogruluyor (3 günlük turist biletinde )
 
 
 
 
 # 3Day Tourist kartı süresi gecmesine ragmen izin veriyor     (jirada   http://wan2.dtsis.com:58080/browse/AP-1202)z"z"
 
 #Ticket Programı 365Days biletleri 109 günlük üretiyor (done)
 
 
 # Check out Kullanım süresinden sonra yapılırsa verilen uyarı    minutes left:982   .... veya   münutes left:1089  gibi oluyor  (jirada http://wan2.dtsis.com:58080/browse/AP-1203 )
 
 
 #Desfirelarda Süre bitince   EXPİRE DATE  yerine ınvalid device paramters yazıyor 
 
 
 #Biletin Ömrü  Bitmesine Ragmen Periodunun Bitmesi Beklenmesi Hatası Tespit Edildi( örnegin    biletler 12 aylıktır daha sonra kullanılamaz mesela 6 aylık bir bileti üretiminin 11.ayında ilk kez
  okutma yaparsak ..ömrü 1 ay sonra bitmesine ragmen ömürden 5 ay sonrasına kadar kullanılıyor yani biledin periyodunun bitmesini bekliyor )

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 