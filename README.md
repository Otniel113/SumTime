# SumTime
Melakukan penjumlahan total waktu (durasi) dalam jam-menit-detik

## Latar Belakang

![LatarBelakang](https://drive.google.com/uc?id=149wlQ30Tr3Rji-yk2PFa1m1cQ1luqrYw)

Program ini dibuat untuk menghitung durasi total untuk menamatkan sebuah game (atau visual novel dalam kasus ini) dengan menjumlahkan total seluruh durasi dari semua video yang ada dalam playlist

## Menu dan Fitur

Menu awal berisi info seputar total waktu sekarang dan juga berapa kali data telah dimasukkan. Untuk banyak data yang dimasukan sebagai "penghitung" / "counter" biar tidak lupa sudah input sampai mana.

Setelah itu, terdapat 2 fitur yaitu 

**1. Tambah Waktu** sehingga user akan melakukan input waktu sebanyak 3 kali untuk masing-masing : jam-menit-detik

**2. Selesai** sehingga menampilkan hasil total durasi dan setelah itu keluar dari program

## Langkah Kerja Cara Menambah 2 Waktu

Pada program ini, menghitung 2 waktu dilakukan dengan langkah berikut:
1. Melakukan konversi ke detik dari waktu lama (total durasi sementara)
2. Setelah menerima input user jam-menit-detik , dilakukan juka konversi ke detik
3. Langsung menambahkan point 1 dan juga 2
4. Melakukan konversi balik dari jumlah (dalam detik) menjadi format jam-menit-detik

## File dan Cara Buka

1. Program utama ada pada main.cpp
2. Jika memiliki Codeblocks, maka bisa Open Project file SumTime.cbp
3. Jika tidak memiliki IDE apapun, bisa langsung pakai jadi file .exe di folder bin/Debug

## Program yang Bisa Mirip dengan Ini

Penerapan lain dari program ini juga bisa diterapkan untuk menghitung selisih dari 2 waktu berformat jam-menit-detik, biasanya untuk menghitung biaya parkir kendaraan jika diambil harga per jam.
