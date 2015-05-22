#!/bin/bash


chmod +x *


sudo cp google /usr/bin
sudo cp gmail /usr/bin
sudo cp web /usr/bin
sudo cp google-private /usr/bin
sudo cp run /usr/bin
sudo cp update-git /usr/bin
sudo cp srun /usr/bin

cd bin2hex && make && cd ..

sudo cp bin2hex/bin2hex /usr/bin

if [ $1 ]
then

sudo cp open /usr/bin/

fi
