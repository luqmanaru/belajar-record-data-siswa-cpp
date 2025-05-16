program BelajarRecord;
uses crt;

type
  Data_Siswa = record
    nama_lengkap   : string;
    nama_panggilan : string;
    kelas          : integer;
    umur           : integer;
    jenis_kelamin  : string;
  end;

var
  siswa: Data_Siswa;

begin
  clrscr;

  // Mengisi data menggunakan WITH DO
  with siswa do
  begin
    nama_lengkap   := 'Budi Pekerti';
    nama_panggilan := 'Budi';
    kelas          := 10;
    umur           := 15;
    jenis_kelamin  := 'Laki-laki';
  end;

  // Menampilkan data
  with siswa do
  begin
    writeln('Nama Lengkap   : ', nama_lengkap);
    writeln('Nama Panggilan : ', nama_panggilan);
    writeln('Kelas          : ', kelas);
    writeln('Umur           : ', umur);
    writeln('Jenis Kelamin  : ', jenis_kelamin);
  end;

  readln;
end.
