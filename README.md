# Lab0
Calculadora de Figuras Geométricas

1: Git - Criar Repositório (done)
2: Criar a estrutura dos reposiutórios (todo)
3: Implementar os arquivos
  3.1: Criar o arquivo (Ex: ./include/teste.h)
  3.2: Documentar com tags doxygen
4: Sincronizar o git
5: Makefile
6: Gerar a documentação automatica

Tutorial GitHub: http://rogerdudler.github.io/git-guide/index.pt_BR.html

Comandos do Terminal:

mjkats@A307-19L:~$ ls
Área de Trabalho  Downloads         Imagens  Música            Público
Documentos        examples.desktop  Modelos  Pasta sem título  Vídeos
mjkats@A307-19L:~$ cd 
mjkats@A307-19L:~$ ls
Área de Trabalho  Downloads         git      Modelos  Público
Documentos        examples.desktop  Imagens  Música   Vídeos
mjkats@A307-19L:~$ cd git
mjkats@A307-19L:~/git$ git init
Initialized empty Git repository in /home/mjkats/git/.git/
mjkats@A307-19L:~/git$ git clone /home/mjkats/git 
Cloning into 'git'...
warning: You appear to have cloned an empty repository.
done.
mjkats@A307-19L:~/git$ git clone MJK2@github:/home/mjkats/git
fatal: destination path 'git' already exists and is not an empty directory.
mjkats@A307-19L:~/git$ ls
bin  build  doc  git  include  lib  src  test
mjkats@A307-19L:~/git$ cd ..
mjkats@A307-19L:~$ ls
Área de Trabalho  Downloads         git      Modelos  Público
Documentos        examples.desktop  Imagens  Música   Vídeos
mjkats@A307-19L:~$ git clone https://github.com/MJK2/Lab0.git
Cloning into 'Lab0'...
remote: Counting objects: 9, done.
remote: Compressing objects: 100% (5/5), done.
remote: Total 9 (delta 1), reused 0 (delta 0), pack-reused 0
Unpacking objects: 100% (9/9), done.
Checking connectivity... done.
mjkats@A307-19L:~$ ls
Área de Trabalho  Downloads         git      Lab0     Música   Vídeos
Documentos        examples.desktop  Imagens  Modelos  Público
mjkats@A307-19L:~$ cd Lab0
mjkats@A307-19L:~/Lab0$ ls
README.md
mjkats@A307-19L:~/Lab0$ mv ../git/* .
mjkats@A307-19L:~/Lab0$ ls
bin  build  doc  git  include  lib  README.md  src  test
mjkats@A307-19L:~/Lab0$ git add *
mjkats@A307-19L:~/Lab0$ git commit -m "criacao dos diretorios"
No ramo master
Your branch is up-to-date with 'origin/master'.

nada a submeter, diretório de trabalho vazio
mjkats@A307-19L:~/Lab0$ ls
bin  build  doc  git  include  lib  README.md  src  test
mjkats@A307-19L:~/Lab0$ cd src
mjkats@A307-19L:~/Lab0/src$ touch teste.cpp
mjkats@A307-19L:~/Lab0/src$ ls
teste.cpp
mjkats@A307-19L:~/Lab0/src$ cd
mjkats@A307-19L:~$ cd -
/home/mjkats/Lab0/src
mjkats@A307-19L:~/Lab0/src$ ls
teste.cpp
mjkats@A307-19L:~/Lab0/src$ cd..
cd..: comando não encontrado
mjkats@A307-19L:~/Lab0/src$ cd ..
mjkats@A307-19L:~/Lab0$ git add *
mjkats@A307-19L:~/Lab0$ git commit -m "criacao dos diretorios"
[master 46631cc] criacao dos diretorios
 Committer: Michel Jean Katsilis <mjkats@A307-19L.imd.local>
Your name and email address were configured automatically based
on your username and hostname. Please check that they are accurate.
You can suppress this message by setting them explicitly:

    git config --global user.name "Your Name"
    git config --global user.email you@example.com

After doing this, you may fix the identity used for this commit with:

    git commit --amend --reset-author

 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 src/teste.cpp
mjkats@A307-19L:~/Lab0$ git push origin master
Username for 'https://github.com': michelkatsilis@gmail.com
Password for 'https://michelkatsilis@gmail.com@github.com': 
Counting objects: 5, done.
Delta compression using up to 4 threads.
Compressing objects: 100% (2/2), done.
Writing objects: 100% (4/4), 342 bytes | 0 bytes/s, done.
Total 4 (delta 0), reused 0 (delta 0)
To https://github.com/MJK2/Lab0.git
   6c02499..46631cc  master -> master
