 Ulaşım Kuralları ve Bilgileri
***FİRMA BİLGİLERİ 
STASY: metro,tram                   OSY:otobüs (thermal/trolley)                    TRAINOSE:Suburban(proastiakos)

*ATİNADAKİ HAT ve ROTA SAYILARI
Bus için :     10 line  18 route     179 station vardır Bus için agency Id   = 1  dir
Tram için       : 4 Line  6 Route   97 station  vardır  .  Tram için Agency İD = 4 tür. 
Metro İçin : 4 Line Var (m1,m2,m3,m5),  62 station vardır. Metro İçin için Agency İD = 2 dir

* *BİLET/CARD  GEÇERLİLİK SÜRESİ 
Süresi 7 Gün veya Daha Az olan  Biletler  Saat Tabanlı Olup Bitiş Saati Bir Sonraki  Tam Saate yuvarlanmaktadır 
Örneğin ;  3 Days Biletimizin İlk Okutmasını 14.02.2016 20:21:13 de yaptık 
Biletimizin Bitiş Süresi  17.02.2016 20:21:12   (3 gün sonra okutma süremizin 1 saniye öncesinde bitmekedir)

Süresi 7 Günden Fazla Olan Biletler   Gün Tabanlı Olup Süre Bitişi O gün saat 23:59 a kadar geçerlidir
Örneğin  ;3O Days Athens Biletimizin İlk Okutmasını 14.02.2016 20:21 de yaptık
Biletimizin Bitiş Süresi  14.03.2016 23:59 a kadar geçerlidir

* *SLOT ve SVT  ÖZELLİĞİ 
Multiple Biletlerde Slot ve SVT Bulunmamaktadır . 
Desfire Kartlarda iki Farklı Slot Bulunmaktadır 
Bunlardan ;
Öncelik Sırası Slot1indir eğer Geçişe İzinli Bilet Tipi Yoksa  daha sonra Slot2dedir  
Şayet Slot2 de Geçişe izinli Bilet Tipi   Yoksa SVT(Stored Value Ticket) a Bakılmalıdır
**slotların ikisi aynı anda kullanımda olamamaktadır .slot önceliği her zaman SLOT1 dedir
**SUBURBAN BİLET  ve GEÇERLİ HATLARI
Suburban Biletler OD(Origin-Destination) Passler Başlangıç ve Bitiş Noktası Belli Hatlarda Kullanılmaktadır . 
Sadece  Metro ve Railwayda Belirtilen Zonelar Arasında ise Geçerlidir.
Kineta~Airport     ve      Pireaus ~Stephanos Hattında Geçerlidir
**OD passlerle ilk okutma SUBURBANda başlama zorunluluğu vardır daha sonra metroya aktarma yapılabilir 
** BİLET ve KARTLARIN ÇALIŞMA GEÇERLİ OLDUĞU SAATLER
24Hours All Bileti  00:00:00 ile 22:22:22 arası,
5DaysAirport,  7Days Athens,30D Athens 30 D Airport,90d Athens 90D Airport   ; 07:30:00 ile 23:00:00 arası, 
180Days Athens    ; 12:00:00 ile 18:00:00,
180D Airport      ;10:00:00 ile 19:59:59, 
365Days Athens    ; 09:00:00 ile 17:00:00, 
365Days Airport   ;10:00:00 ile 21:59:59   
Diğer Bilet Türleri    00:00:00 ile 23:59:59  saatleri arası geçerlidir 
(En Güncel Kullanım Saatleri İçin FB539/FT539/FM639 Parametre Dosyasına Bakabilirsiniz)

**ULAŞIM ARASI AKTARMA HAKLARI








DEĞİŞECEK












OASA Biletlerinin Geçtiği Suburban İstasyonları
Magoula,Piraeus,Aspropyrgos,Lefka,A.Liosia,Rentis,SKA,Aharnai,Rouf,
Metamorfosi,Athens,Irakleio,Ag. Anargyroi,Vasilissis Tower,Kifisias,Kato Aharnai
Penteli,D. Plakentias,Pallini,Paiania,Kantza,Korop,

NOT:

* OASA bölgesinde öncelik     1)seasın pass 2)SVT 3)Count Ticket  
**X80 nin hattı pireaus-akropolis-sytagma olarak değiştirilmiştir.Havaalanı Ekspress otobusler x96,X97,X95 tir
*Expres Bus Air da 90 dakika gibi bir zaman sınırı yoktur 
* Discount Code 5 için %50  İndirim
  Discount Code 6 için %25 indirim
  Discount Code 1 için Tam Ücret Alınmaktadır 
*Gün İçindeki Harcaması 24 Hours All mode biletinin fiyatına ulaşan kişi ulaştığı  andan itibaren  
gün boyu ücretsiz seyahat edebilir.
     örneğin : 24 Hours All Mode bilet 3£ .Herhangi bir yolcunun gün içinde ulaşım için harcadığı para 3£ ya
                          ulaştı ise bu andan itibaren gün boyu ücretsiz ulaşım sağlayacaktır 

***SVT kartta yolcunun profile expiry date tarihi gecmedi  ise ;
     PRODUCT DETAİL CODE + FARE ORG ID
     SVT Kartta yolcunun profile epriy date geçti ise ;
         AGE + FARE ORG ID                                                           kullanılarak discount code bulunur
       (not eger bulunan blogun discountdetailcode u 10 ve 1odan büyükse aramaya devam ediyoruz)

**Bir kartla metro yada suburbanda checkin yapıp check out yapmadan çıkış yapılırsa  diğer araçlara 
biniş yapmaya izin verilmemektedir.. 5saat boyunca biniş yapılamamaktadır

**ulaşımda  boarding          retaqboardingtime :5    retagdisembarktime :20 ise
bir yolcu check in yaptı ise 5 dakika boyu check out yapamaz .

 useadptlimit  (fb523)  teki parametre bir yolcu checkin  yaptı fakat mesela 300 dakika 
içinde checkout yapmzsa check out hakkı yok oluyor.bu süreden sonra okutursa check in olarak
kabul ediliyor 
*****mainconfig icinde device type 0 ise bus ; 1 ise tram ; 2 ise metro ; 3 ise suburbandır

**duraklar :  suburban  2001-2021,2110   ve 2101-2124 arası
Metro stationlar 1011-1072











Ulaşım Kuralları ve Bilgileri
*BİLETLERİN GEÇERLİ/GEÇERSİZ OLDUĞU ALANLAR
90M All Mode :
*Geçerli :90M All Mode Bilet  Train Osede ise Magoula-Kineta  ve Magoula-Koropi Hattında  Geçerli
Geçersiz: Express Bus, Koropi-Airport  Metrosu

24Hours All Mode  :
*Geçerli Alanlar : Bus,Trolley,Tram,Metro(Koropiye Kadar), 
SuburbanTrainOSE(Magoula-Kineta ve Magoula-Koropi hattı)
Geçersiz :Expresbuss ve Koropi-Airport Metrosu

5Days Ticket  All Mode:
*Geçerli Alanlar : Bus,Trolley,Tram,Metro(Koropiye Kadar), 
SuburbanTrainOSE(Magoula-Kineta ve Magoula-Koropi hattı)
Geçersiz :Expresbuss ve Koropi-Airport Metrosu
3Days Tourist Ticket :
*Geçerli Alanlar : Bus,Trolley,Tram,Metro(Koropiye Kadar), 
SuburbanTrainOSE(Magoula-Kineta ve Magoula-Koropi hattı) ,Express Bus

Expres Bus for airport :
 Havaalanı Bölgesin(d)e bir binişlik otobüs biletidir.Havaalanından  şehre yada 
Şehirden hava alanına ulaşım imkanı sağlamaktadır

Metro -Airport Ticket(1p)-(2p)-(3p)  :
Havaalanına Bir binişlik sağlayan metro biletidir
*Geçerli alanlar : .90 dakika içersinde OASAnın  bütün araçlarına biniş izni vardır
 ve suburbanTRAINOSE(Magoula-Kineta ve Magoula-Koropi hattı)
Geçersiz: Expressbus 

Airport from Pallini,Koropi,Airport  :
Havaalanına Pallini yada Koropiden  havaalanına ulaşımı sağlayan  bir binişlik metro biletidir
Geçerli Alanlar: Metro ve SuburbanTrainOse(Magoula-Kineta ve Magoula-Koropi hattı) geçerlidir
Geçersiz: Expressbus 


Month,3Month,6Month,1Years Card :
*Geçerli Alanlar : Bus,Trolley,Tram,Metro(Koropiye Kadar), 
SuburbanTrainOSE(Magoula-Kineta ve Magoula-Koropi hattı)
Geçersiz :Expresbuss ve Koropi-Airport Metrosu

Month,3Month,6Month,1Years Airport Card :
*Geçerli Alanlar : Bus,Trolley,Tram,Metro(Koropiye Kadar), 
SuburbanTrainOSE(Magoula-Kineta ve Magoula-Koropi hattı)
Geçersiz :Expresbuss ve Koropi-Airport Metrosu

Ücretsiz Ulaşım Hakkı Bulunnlar
OASA. Otobüsler, troleybüs, tramvay, Elektrikli Tren, Metro (Koropi kadar yani Havaalanı Dahi Değil) 
İşsizler
Asker,Polis,Sahil Koruma ,İtfaiyeciler
6yaşından  küçük  çocuklar.
%67 üzerinde  bir sakatlık yüzdesi bulunanlar   
**Belgelerini Göstererek Ücretsiz  Ulaşım Sağlayabilirler

İndirim Hakkı Bulunanlar 
OASA. Otobüsler, troleybüs, tramvay, Elektrikli Tren, Metro (Havaalanı) 
Öğrenciler 
 7 ila 12 yaş arası  çoçuklar
13-18 yaş arası gençlerin kimlik kartı ile indirimli ücretlerden hakkına sahiptir.
65 yaş üzeri insanların kimlik kartı ile indirimli ücretlerden hakkına sahiptir.
4 ten fazla çoçuklu aileler 


OASA biletlerinin Geçmedigi Suburban İstasyonları 
Aharnai ,Kiato,Dekeleia,Zevgolatio,A.Stefanos,Ag. Theodoroi,Afidnes,Sfendali
Megara,Avlo,nasNea Peramos,A.Thomas,Oinofyta,Oinoi,Dilesi,Ag. Georgios,Kalohori


NOT:
**Atinada Bir yerden Bir yere giderken farklı yollar ve rotalar belirlememize yardımcı bir link:
http://www.stasy.gr/index.php?id=453&L=1
OASAnın bütün tram,metro duraklarını google map üzerinde görebileceğimiz bir link
https://www.google.com/maps/d/viewer?mid=1m5WHC9d-mLyDhjnQvfJJWaYiYZk&hl=en
Atinadak Bütün Seferlerin Bulunduğu ve Seçilen Rotaya Göre  Telematic Bilgilerini Gösteren Link:
http://telematics.oasa.gr/en/#main



**aktarma icin passlerde permittranstype a bakılır…SVT icin traffgroupcode a bakılır

**agency ıd :1 bus    ;  agency ıd:2 metro  ;  agency ıd :3 suburban ; agency ıd :4 tram 

**bir oscvm veya scvm nin sadece checkin yada sadece check out yapan bir cihaz olması için
/opt/data/config/mainconfig   içindeki  GATE_OPERATION MODE   deiştirilir  
2 ise hem checkin hem checkout   3ise checkin    4 ise check out  cihazı olarak kullanılır

**  transferpossibletime    bus,tram,sub için : 75        metro için: 90
**boardretaqpossibletime/disembarkretag    bus/tram/metro/sub    0,15   30,30   30,30     0,0


**Cihazların hat seçmeme ve çalışmama saatleri  01:00 - 06:00 (sadece metro ve suburban için)


*Sistemimiz ilk olarak zONE kontrolü daha sonra time kontrolüne dönüşüm yapılmıştır
tarih: 24.6.2016



***same _vehicle_transfer
       Same_route_transfer
       other_zone_transfer                            metro için : NO    digerleri için : YES


**suburban biletler (90m ve 90m round)  ilk önce suburbana okutulma zorunluluğu bulunmaktadır 
suburbanda ilk kez okutulduktan sonra metroda kullanılabilir 














































































