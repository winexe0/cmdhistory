echo Please wait, as this may take a while
sudo apt-get install gawk gcc g++ make -y  --allow-unauthenticated
aclocal 
autoconf
automake --add-missing
