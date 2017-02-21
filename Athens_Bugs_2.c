#Athens Bugs
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

#20160620
- 

#20160618
- TRAM kurulumunda second OVMC ilk açıldığında parametreleri indirdikten sonra OSCVM cihazlarına parametrelerin gitmediği görüldü.

#20160615
- Durak bilgisinin bulunulan durak hücresine sığmadığı görüldü.
- kontak off yapılıp OSCVM cihazları kapandıktan sonra contact on duruma getirildiğinde OVMC force olarak kapanıyor.
- Reader güncelleme testinde cihazların uygulamalarını kapattıktan sonra o şekilde kaldıkları görüldü. Reader ACK dönmediği görüldü.

#20160607
- Sub cihazında check in yapılan kart metro cihazında check out yapabiliyor. Ama tam tersi olmuyor.

#20160606
- SCVM olarak kullanılan L15 numaralı cihazın ethernetinin bağlanmadığı görüldü. Yapılan incelemelerde ethernet config dosyasının device type 3 ü değerlendirmediği görüldü.

#20160601
- OSCVM cihazı insatallation yapılıp WAITING OVMC INSTALLATION ekranında iken parametreleri yüklenmiş olan OVMC cihazı ile haberleştiğinde parametreleri aldığı ve hat seçildiğinde hat seçtiği görüldü.
- Aynı cihaz ile SCVM kurulumunda parametreler her defasında tekrar indiriliyor.

#20160530
- TRAM kurulumlu first OVMC cihazının OBCH bağlantısının kırmızı olduğu görüldü. Switch konumu doğru.

#20160526
//- SAMd20 takılı olan cihaz sabah kontrol edildiğinde çalışmadığı görüldü.
//- OVMC Information bilgileri yanlış. Information ekranında gün içerisinde yapılan hat seçim işlemlerinin ve kayıtlarının tutulması iyi olur.

#20160526_GÜNCEL_HATALAR
- TRAM cihazlarının elektriği kesildiğinde sayaçların sıfırlandığı görüldü. 
- L5 BUS kurulumlu OVMC cihazı hat seçili ve wifi bağlantısı olmasına rağmen sunucuya bağlanmayı denemediği görüldü.
- OSCVM cihazına kart okutulmasına rağmen OVMC cihazında sayacın artmadığı görüldü.
	> {May 26 14:27:31 ovmc user.info qovmc: INF:Transaction received from: 10.10.10.51
	May 26 14:27:31 ovmc user.info qovmc: INF:    Card ID: 3001010000000398
	May 26 14:27:31 ovmc user.info qovmc: INF:    Before card balance: 190808
	May 26 14:27:31 ovmc user.info qovmc: INF:    After card balance: 190808
	May 26 14:27:31 ovmc user.info qovmc: INF:    Route ID: 101
	May 26 14:27:31 ovmc user.info qovmc: INF:    Zone code: 2
	May 26 14:27:31 ovmc user.info qovmc: INF:    Device ID: 230190101
	May 26 14:27:31 ovmc user.info qovmc: INF:    Before device ID: 220001901
	May 26 14:27:31 ovmc user.debug qovmc: DBG: pushTransRecUnique(): db name = /opt/data/recs/recdb.sqlite, conn name = qt_sql_default_connection
	May 26 14:27:31 ovmc user.debug qovmc: DBG: getTransRecCountByDevice(): db name = /opt/data/recs/recdb.sqlite, conn name = qt_sql_default_connection
	May 26 14:27:31 ovmc user.info qovmc: INF:Device 1 transaction count: 0
	May 26 14:27:31 ovmc user.debug qovmc: DBG: getTransRecCountByDevice(): db name = /opt/data/recs/recdb.sqlite, conn name = qt_sql_default_connection
	May 26 14:27:31 ovmc user.debug qovmc: DBG: getTransRecCountByDevice(): db name = /opt/data/recs/recdb.sqlite, conn name = qt_sql_default_connection
	May 26 14:27:31 ovmc user.debug qovmc: DBG: getTransRecCountByDevice(): db name = /opt/data/recs/recdb.sqlite, conn name = qt_sql_default_connection
	May 26 14:27:31 ovmc user.info qovmc: INF:Sending status
	May 26 14:27:31 ovmc user.info qovmc: INF:Device 1 count 0
	May 26 14:27:31 ovmc user.info qovmc: INF:Status acknowledge
	May 26 14:27:31 ovmc user.info qovmc: INF:No more actions to process
	May 26 14:27:32 ovmc user.info qovmc: INF:Sending heartbit request to OVMC
	May 26 14:27:32 ovmc user.info qovmc: INF:Heartbit response from OVMC
	May 26 14:27:33 ovmc user.info qovmc: INF:Heartbit response from port 10022
	May 26 14:27:34 ovmc user.info qovmc: INF:Heartbit request from 10.10.10.60
	May 26 14:27:34 ovmc user.info qovmc: INF:I/O info received from OBCH
	May 26 14:27:34 ovmc user.info qovmc: INF:OBCH power on time: 2414, temp: 38C
	May 26 14:27:34 ovmc user.info qovmc: INF:OBCH ver: 1.1.2.18
}

#20160525_GÜNCEL_HATALAR
- Bus App Fw update işleminde dosyalar indirildikten sonra update işlemi gerçekleşmiyor. 
	> Dosyalar sunucudan indiriliyor fakat OSCVM cihazlarına gönderilmeden OVMC kendiliğinden kapanıyor 
	> Açılan OVMC dosyaları OSCVM cihazlarına gönderip kendisi de update işlemi başlatıyor ve update işlemi başarılı olarak tamamlanıyor.
- Download işleminde OVMC cihazının downloada devam edemediği ve hata vermediği görüldü. Yapılan İşlemler;
	> Cihaz download yaparken server kapatıldı cihazın bağlantısı kesildiği. Server çalıştırıldı download işlemi yeniden başlatıldı.
	> Cihaz download yaparken server kapatıldı cihazın bağlantısı kesildiği. Server çalıştırıldı download işlemi yeniden başlatıldı.
	> Cihaz download yaparken server kapatıldı cihazın bağlantısı kesildiği. Server çalıştırıldı download işlemi yeniden başlatıldı.
	> Cihaz download yaparken Wifi modem kapatılıp açıldı. OVMC Download from Server ekranında kaldı ve oradan çıkmadı tekrar sunucu bağlantısını sağlamadı. Download ekranında kaldığı için ekrandan çıkılamıyor.
	!!! Aynı durumu terminalden ifdown wlan0 ve ifup wlan0 komutları ile DMC de deneyeceğim
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
- Set Defaults komutunda parametreler silinmiyor.
- OVMC make installation durumunda iken kontak takılı olmamasına rağmen kontak var olarak algılıyor.
- Kontak yokken OVMC installation yapıldığında parametreler indirilip OSCVMlere gönderilemeden OSCVMler kapanıyor.

#20160502 Güncel Hatalar Test edilecek
- üst üste BUS kurulum testinde en son TRAM olarak kurulmak istenen OSCVM cihazının INSTALLING ekranında kaldığı görüldü.
- Wifi kapatıldığında 1 nolu OVMC cihazın wifi bağlantısını koparmadığı görüldü. //Cihaz Yunanistana Gönderildi
- OSCVM 1 nolu cihazın UL kartı okumadığı görüldü. Logları mevcut (COM1 ilk kart okuma logları). Cihaza Desfire kart okutulduğunda UL kartları da okumaya başladığı görüldü
- Farklı kart geldiğinde kart okuma işlemi biraz yavaş gibi
- Bazı cihazların UL kartları okumadığı loglarda Readerin kilitlendiği görüldü

20160519
//- 1.0.1.34-1.0.1.37 versiyonunda 4 lü BUS kurulum yapılmış olan OVMC ve OSCVM cihazlarından 20m kablo ile bağlanmış olan 1 ve 3 nolu OSCVM cihazlarının bağlantılarını kopardığı ve tekrar bağlanmadıkları görüldü. Loglardan bütün cihazlara ping atılabildiği görüldü.
//- Finansal records özelliği çalışmıyor [1.0.1.42-1.0.1.46]
//- TRAM kurulumlu OVMClerden hat seçildiğinde hat bilgisi diğer OVMC cihazında Current Station olarak gözükmektedir.
//- Sıfır BUS kurulumunda 20m kablo ile 6 nolu OSCVM cihazı OVMC ile haberleşme sağlayamadı. Cihaz kablosu çıkarılarak tekrar açıldığında yine bağlantı kurulamadı. Kısa kablo ile bağlantı sağlandıktan sonra 20m kablo ile bağlantı başarılı olarak sağlanabildi. KABLOLAR DEĞİŞİP CİHAZLAR GÜNCELLENDİKTEN SONRA HATA TEKRAR OLUŞMADI. 
//- Kontak kapatıldığında BUS OVMC cihazının 40dk geçmesine rağmen kapanmadığı görüldü. OBCH versiyonu güncellenmediğinden
//- Hat seçili ve içinde kayıt olan BUS kurulumlu OVMC kontağı kapatılıp 25dk sonra hattan çıkıldığında sunucuya bağlanmadığı, kayıtları göndermediği, Waiting for download ekranında kaldığı görüldü. OBCH VERSİYONU ESKİ OLDUĞUNDAN ŞU ANDA KONTAK KAPATILDIĞINDA OVMC CİHAZI 25 DK HATTA KALMAYACAKTIR.

20160518
//- BUS hat seçiminden sonra 4. ve 3. OSCVM cihazlarına kart okutulduğunda sayacın artmadığı görüldü. 57-64 versiyonunda bu hata görülmedi
//- CAT6 kablolar OBCH kısımında oynatıldığında link down ve link up olduğu görüldü. kKABLOLAR DEĞİŞTİRLİDİ KULLANILAN CAT6 TEK DAMARLI KABLODAN KAYNAKLI OLDUĞUNDAN DOLAYI OLDUĞU ELEKTRONİK ARGE TARAFINDAN BİLDİRİLDİ

20160517
//- Yeni versiyonda eklenen installation statustan dolayı eski versiyonların üzerine yeni versiyon update yapılırsa cihazlar make installation durumunda açılıyorlar. 
//- OSCVM cihazlarına USB ile imaj yüklendiğinde bazen SAM kartı görmediği oluyor. KISA BİR SÜRE SONRA GÖRÜYOR
//- TRAM OVMC kayıtlarını gönderemediğinde tekrar hat seçilirse sayaçlar sıfırlanıyor. Gönderilmemiş kayıt bilgileri gözükse iyi olur. SAYAÇLAR HAT SEÇİLDİĞİNDE BAŞLAR HATTAN ÇIKILDIĞINDA KAYITLAR GÖNDERİLMEMİŞ OLSALAR BİLE 
//- SCVM kurulumunda dowload complate dedikten sonra o şekilde kalıyor. Installation Success demiyor. Ana ekrana dönüldüğünde Out of services yazıyor.
//- OVMC cihazı açılıp server bağlantısı sağladığında yeni parametre varsa indiriyor fakat parametre indirildiğine dair uyarı vermiyor.
//- OVMC information ekranında OSCVM param versiyon bilgisi yanlış gösteriliyor. SON PARAMETRE GÜNCELLEME ZAMANI GÖSTERİLİYOR
//- OSCVM cihazları güncelleme işlemi yapılıp kendiliğinden yeniden başlarken yeşil ledlerin sönmediği yada kırmızı olmadığı görüldü
//- Hat seçili durumda iken cihazların hattan çıkmadan parametre dosyalarını indirdiği görüldü.

20160516
//- Cihaz ilk kurulumda Authenticationu geçememesine rağmen wifi kapanıp açıldığında parametreleri indirdiği görüldü. BU DURUM GERÇEK SUNUCULARDA OLUŞTURULAMADI
//- 6 nolu OVMC cihazına bağlı olan 20, 21 ve 22 nolu OSCVM cihazları 2. update işlemini başarılı olarak tamamlamalarına rağmen 3. update işleminden sonra sürekli resetlendikleri görüldü. HATA 1.0.1.52-1.0.1.57 VERSİYONUNDA DÜZELTİLDİ

20160514
//#13.05.2016 saat 21:28 civarında tahminen elektriklerin kesildiği düşünülmektedir. Sabah incelemelerinde aşağıdaki durumlar görülmüştür.
//- 6 nolu TRAM OVMC cihazının 20(F1), 21(F2), 22(F3)(installation esnasında bağlantı kurulamamıştı) ve 25(S1)(uygulama açılmıyor) numaralı OSCVM cihazları ile haberleşmediği 26(S2) ve 27(S3) ile haberleştiği görüldü. Bağlanmayan cihazlar (OSCVM) tekrar installation işleminden sonra bağlandılar. 
//- 7 nolu BUS OVMC cihazının 23, 5, 6(installation esnasında bağlantı kurulamamıştı) ve 7(uygulama açılmıyor) numaralı cihazlar ile haberleşmediği görüldü. 
//- OSCVM cihazları install edildikten sonra OVMC install işlemi başarısız olur ve cihazlar kapanıp açılırsa OVMCden tekrar install işleminde fail oluyor. Ancak OSCVMler tekrar instal eidilip OVMC install edilirse o zaman kurulum tamamlanıyor.

20160505
//- SCVM cihazı kurulumdan sonra yeniden başlatılırsa ip adresini kaybettiği ve bundan dolayı sunucuya bağlanmadığı görüldü

20160504
//- TRAM ticazlarda her OVMC kendi sayaçlarını gösteriyor diğer OVMCnin sayaçlarını göstermiyor
//- OVMC kapandığında sayaç sayısını unutuyor
//- OVMC kapanıp açıldığında OSCVMlerden kayıtları çekmiyor yada OSCVMler kayıtlarını göndermeiyor

20160502
//- 1.0.1.41-1.0.1.44 SCVM kurulumunda aynı ip ile 2 cihaz kurulabiliyor. HATA DÜZELTİLDİ 1.0.1.45
//- 1.0.1.41-1.0.1.44 TRAM kurulumunda bir OVMC cihazının arızalanması durumunda diğer OSCVM cihazları hat seçmiyor. NORMAL HABERLEŞME İŞLEMLERİ OVMC ÜZERİNDEN YAPILIYOR
//- 1.0.1.41-1.0.1.44 Hattan çıktıktan sonra WAITING FOR DOWNLOAD ekranının timeout süresi yok
//- 1.0.1.41-1.0.1.44 Daha önce installation işlemi yapılan cihazlara USB ile yeni versiyon yüklemesi yapıldığında OBCH üzerindeki 3 ve 4 numaralı ledlerin yeşil yandığı OBCH düğmesine basılarak kapatılmasına rağmen ledlerin sönmediği ancak OBCH elektriği kesildiğinde söndüğü görüldü.
//- Wifi üzerinden fw_update işleminden sonra bir cihaz açılmadı.
//- TRAM kurulumlu cihazların kayıtlarını göndermediği görüldü
//- OVMC ile cihaz sıfırlanmadan üst üste kurulum işlemi yapıldığında DMC TIMEOUT oluşuyor fakat hat seçip çıktığında veri gönderimi başarılı tamamlanıyor.
//- 1.0.1.39-1.0.1.42 TRAM kurulumlu cihazlarda 2 OVMCden biri hatta değilken diğer OVMCden hattan çıkış işlemi yapıldığında hatta olmayan OVMCnin waiting for download ekranında kaldığı back tuşunun ve diğer tuşların işe yaramadığı görüldü.

20160430
//- 1.0.1.39-1.0.1.42 ilk kurulumda OBCH kırmızı kalıyor. DAHA SONRA YEŞİLE DÖNÜYOR
//- 1.0.1.39-1.0.1.42 Başarılı olarak kurulum işleminden sonra OBCHın OVMC ledi yeşil yanarken OSCVM ledleri kırımızı yanıyor. Daha Sonra kendiliğinden yeşile dönüyor. NORMAL
//- 1.0.1.39-1.0.1.42 TRAM kurulumu yapılmış cihazlardan bir adet OSCVM cihazının elektriği kesilirse OVMC resetleniyor HATA DÜZELTİLDİ

20160426
//- SCVM kurulumunda ID girilip OK dendiğinde caihaz MAKE INSTALLATION ekranına geçti ve serverdan dosyaları indirdikten sonra PLEASE TAKE YOUR CARD ekranına geçti. HATA DÜZELTİLDİ

2016042
//- TRAM setup işleminde config ayarlarındaki OSCVM active durumları kapalı olarak gözüküyordu. 1. cihazı açmaya çalıştığımda diğer cihazlar kapandı. HATA DÜZELTİLDİ
//- OVMC ve OSCVM haberleşmeleri düzgün olmasına rağmen OBCH üzerindeki ledlerden birinin kendiliğinden kırmızı olduğu görüldü. OBCH LED YEŞİL YANMIYORDU
//- Staff Login ekranında iken 2. tuşa basıldığında yine şifre ekranı açılıyor. HATA DÜZELTİLDİ 1.0.1.41-1.0.1.44
//- Bazen OVMCden hat seçildiğinde OSCVMlerden bazılarının hat seçmediği görüldü. OSCVM CİHAZININ PARAMETRELERİ KOPYALAMADIĞI GÖRÜLDÜ.
//- OSCVMler BUS modunda iken OVMCden TRAM installation işlemi yapıldığında WRONG DEVICE TYPE uyarısı alındı. Ardından OSCVMler TRAM moduna alınsa dahi OSCVMler SUCCESS demesine rağmen installation fail oluyor. HATA DÜZELTİLDİ

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
//- OVMC ilk kurulum download işlemi başladıktan sonra 8 parametrenin download edildiği görüldü fakat bu 8 parametre ne OVMCde nede OSCVMde görülmemektedir. PARAMETRELER TAM OLARAK İNDİRİLMEZ İSE İNDİRİLEN PARAMETRELER DE SİLİNMEKTEDİR
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
//- OSCVM Kurulum işleminde finishin üzerinde iken 4. tuşa basıldığında uygulamanın resetlendiği görüldü.  ---Yazılım güncellendi (Onur)

20160406
//- Yüklenen imajda tuşlar basmıyor  ---qt1070 ayarının 5 ten 100 e alınması gerekiyor
//- Tuşlar kendiliğinden basma durumları görülüyor  ---Donanımsal ve ayar dosyası ile gerekli ayarlar yapıldı
//- Tarih Saat bilgisi yanlış  ---Tarih saat kore verilerine göre alınıyor.