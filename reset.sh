# Bash script I made to automate processes.
# You will need to replace the directory with your directory (i.e. change xueqilin to your username)

make
cd ~/root/lib
rm KDetSimDictUX_rdict.pcm
ln -s /home/xueqilin/KDetSim2/src/KDetSimDictUX_rdict.pcm   KDetSimDictUX_rdict.pcm
cd ~/KDetSim2/
# gSystem->Load( "/home/xueqilin/KDetSim2/lib/KDetSim.sl" );