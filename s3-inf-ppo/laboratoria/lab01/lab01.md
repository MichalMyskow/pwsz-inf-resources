```bash
git --version

cd /
mkdir ppo
cd ppo
mkdir 40317
cd 40317

git init
git remote add origin https://github.com/MichalMyskow/pwsz-inf-resources.git
git config user.name "Michał Myśków"
git config user.email "michal.myskow@stud.pwsz.legnica.edu.pl"

git pull origin master
git status

git add .
git status
git commit -m "zmiany"
git push origin master

```