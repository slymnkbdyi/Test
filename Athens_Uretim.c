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

