:

umask 0
touch myfile.txt
chmod 0777 myfile.txt; ls -l myfile.txt;
chmod 4777 myfile.txt; ls -l myfile.txt;
chmod 4677 myfile.txt; ls -l myfile.txt;
