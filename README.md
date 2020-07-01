# PROTEUS-ArduinoUNOSensorAir
Project ini dibuat untuk mendeteksi adanya kebocoran air di lambung/dinding kapal. Digunakan mikrokontroller jenis Arduino UNO R3.
## Cara kerja
1. Bila air mengenai sensor air (dipilih rain sensor, karena fungsinya yang sama), sinyal sensor dikirim ke Arduino. Arduino menanggapi dengan mengaktifkan lampu LED D1 (warna merah), sedangkan lampu D2 (warna hijau) akan mati. 
2. Sebaliknya, bila kondisi aman (tidak ada air di permukaan sensor), lampu LED D2 (hijau) akan aktif dan LED D1 (merah) akan mati. Sinyal dikirim pula ke mikrokontroller lain (misalnya Raspberry PI, atau perangkat IoT lain) melalui pin Tx Rx (Transmitter-Receiver) di Arduino.
## Simulasi dengan Proteus
Berikut susunan sketch circuit, file schematic, library, .ino, dan .hex arduino sudah tersedia di source code. Direktori .hex di edit properties bisa disesuaikan dengan lokasi file di komputer anda.
*Dalam simulasi proteus digunakan perlakuan manual dengan menekan LOGICSTATE (di pojok kanan atas gambar) agar kondisi berubah ---> representasi kondisi sebenarnya. 0: bila aman, tidak ada kebocoran, tidak ada air di permukaan sensor. 1: ada kebocoran, ada air di permukaan sensor.* 

Gambar berikut menunjukkan kondisi 0, yakni saat aman, tidak ada air di sensor (tidak bocor).
![Sketch](/images/schematics_aman.JPG)
Gambar berikut menunjukkan kondisi 1, yakni saat terjadi kebocoran (ada air di sensor).
![Sketch](/images/schematics_bocor.JPG)
Lampu yang digunakan dalam simulasi masih LED 1.2 V, bila ingin diganti sirine atau lampu peringatan, nantinya dapat ditambahkan komponen Relay.

### Koneksi ke server
Pengiriman sinyal dapat berlangsung melalui pin Tx dan Rx (menggantikan sinyal ke Virtual Terminal pada gambar). Selain itu, dapat pula digunakan modul Ethenet beserta penambahan beberapa baris di file .ino (C/C++) untuk koneksi ke antena. Raspberry Pi dapat juga digunakan (selain opsi modul ethernet) namun harus terlebih dulu dikonfigurasi (Raspberry Pi menggunakan Phyton)

### Detil harga
1. Arduino UNO R3 (genuine Italy) Rp339000 [Digiwarestore](https://digiwarestore.com/id/arduino-board/arduino-uno-rev3-442056.html)
2. Sensor Hujan Rp57700 [Digiwarestore](https://digiwarestore.com/id/sensor-other/rain-module-foliar-high-sensitive-sensor-module-for-arduino-compatible-296281.html)
3. Modul Ethernet ENC28J60 Rp38000 [Bukalapak CNCStore](https://www.bukalapak.com/p/elektronik/elektronik-lainnya/84447-jual-cnc-enc28j60-ethernet-lan-network-module-for-arduino-uno-mega)
4. Raspberry Pi Rp603000 ---> bila tidak memakai modul ethernet poin 3 diatas [Digiwarestore](https://digiwarestore.com/id/raspberry-board/raspberry-pi-3-model-b-made-in-uk-442316.html)
5. Kabel LAN STP (harga bervariasi, tergantung kualitas dan panjang kabel) [Bukalapak](https://www.bukalapak.com/products?search%5Bkeywords%5D=lan%20stp)
6. Casing Arduino dan modul atau raspberry pi (bila memakai), bisa beli atau but sendiri, yang penting aman dari gangguan
7. LED/Lampu indikator bisa disesuaikan
