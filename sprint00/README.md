# [Sprint 00](https://github.com/InessaRepeshko/ucode-connect-Marathon-C/tree/main/sprint00)


**CHALLENGE**

Start learning programming.



## [Task 00](https://github.com/InessaRepeshko/ucode-connect-Marathon-C/tree/main/sprint00/t00)

**NAME**

Man

**SUBMIT**

```man.sh```

**DESCRIPTION**

Create a script that displays ```man``` manual. Push the script to ```t00``` directory of your git repository. Use ```vim``` or ```emacs``` .



## [Task 01](https://github.com/InessaRepeshko/ucode-connect-Marathon-C/tree/main/sprint00/t01)

**NAME**

Git

**SUBMIT**

```push_me.txt```

**DESCRIPTION**

Create a ```txt``` file that contains three ```git``` commands that you will use to commit and push task solutions to your repository:
* add changes staged for the next commit
* commit changes with a descriptive commit message
* push committed changes to a remote repository

Each git command must be followed by a newline.

**CONSOLE OUTPUT**
```
>cat -e push_me.txt
git command1$
git command2$
git command3$
```



## [Task 02](https://github.com/InessaRepeshko/ucode-connect-Marathon-C/tree/main/sprint00/t02)

**NAME**

Set me on file

**SUBMIT**

```set_me_on_file.sh```
 
**DESCRIPTION**

Create a script that:
* creates a file called ```fire```
* sets permissions and last-modified date for the created ```fire``` file like in the CONCOLE OUTPUT section

**CONSOLE OUTPUT**
```
>zsh set_me_on_file.sh
>ls -laT
total 8
drwxr-xr-x   4 xlogin  users  128 Jan  3 13:42:37 2019 .
drwxr-xr-x  19 xlogin  users  608 Jan  3 13:42:02 2019 ..
-r--------   1 xlogin  users    0 Aug 24 00:00:00 1991 fire
-rw-r--r--   1 xlogin  users   31 Jan  3 13:42:37 2019 set_me_on_file.sh
```



## [Task 03](https://github.com/InessaRepeshko/ucode-connect-Marathon-C/tree/main/sprint00/t03)

**NAME**

Remove

**SUBMIT**

```remove_me.sh```

**DESCRIPTION**

Create a script that removes specified directories and/or files.

**CONSOLE OUTPUT**
```
>ls -R
dir1   dir2   dir3
./dir1:
./dir2:
file1
file2
remove_me.sh
./dir3:
file3
>zsh remove_me.sh dir1 file1
>ls
dir2   dir3   file2   remove_me.sh
>zsh remove_me.sh dir2
>ls
dir3   file2   remove_me.sh
>zsh remove_me.sh dir2
>ls
dir3   file2   remove_me.sh
>zsh remove_me.sh dir3
rm: dir3: Directory not empty
>cd dir3
>zsh ../remove_me.sh file3
>cd ..
>zsh remove_me.sh dir3
>ls
file2   remove_me.sh
>
```



## [Task 04](https://github.com/InessaRepeshko/ucode-connect-Marathon-C/tree/main/sprint00/t04)

**NAME**

Knock knock . . .

**SUBMIT**

```wake_up.sh```

**DESCRIPTION**

Create a script that:
* creates a file ```instructions.txt```
* writes ```Follow the white rabbit.``` followed by a newline to ```instructions.txt```

**CONSOLE OUTPUT**
```
>zsh wake_up.sh
>cat -e instructions.txt
Follow the white rabbit.$
>
```



## [Task 05](https://github.com/InessaRepeshko/ucode-connect-Marathon-C/tree/main/sprint00/t05)

**NAME**

Kerberos

**SUBMIT**

```kerberos.txt```

**DESCRIPTION**

Create a file ```kerberos.txt``` that contains three commands:
* display the current tickets in the credential cache
* authenticate yourself to the Kerberos server as principal on any computer • remove all credential caches

Each command must be followed by a newline.



## [Task 06](https://github.com/InessaRepeshko/ucode-connect-Marathon-C/tree/main/sprint00/t06)

**NAME**

Find Neo

**SUBMIT**

```find_chosen.sh```

**DESCRIPTION**

Create a script that:
* takes a file as an argument. The file contains Matrix characters formatted as in the CONSOLE OUTPUT section
* shows only redpill entities from file. Be sure to pay attention to the script's work in the CONSOLE OUTPUT

**CONSOLE OUTPUT**
```
>cat -e characters
Agent #0 strength:8 power:5$
Agent #1 strength:5 power:5$
Redpill Anderson strength:6 power:8$
Agent #2 strength:3 power:6$
Ageredpillnt Dozer strength:2 power:4$
redpill Dozer strength:2 power:4$
reDPill Trinity strength:9 power:9$
>zsh find_chosen.sh characters | cat -e
Redpill Anderson strength:6 power:8$
redpill Dozer strength:2 power:4$
reDPill Trinity strength:9 power:9$
>
```



## [Task 07](https://github.com/InessaRepeshko/ucode-connect-Marathon-C/tree/main/sprint00/t07)

**NAME**

Commit history

**SUBMIT**

```git_log.sh```

**DESCRIPTION**

Create a script that:
* shows abbreviated commit hash and subject separated by a space of three last commits

Create more than three commits in ```Sprint00``` repository so that the assessor will be able to check the script correctness during the defence.

Every commit must be followed by a newline. Look an example of how it can work in the CONSOLE OUTPUT.

**CONSOLE OUTPUT**
```
>zsh git_log.sh > git_history.txt
>cat -e git_history.txt
f61fde9 t05 find chosen$
50ab5e5 t04 kerberos$
dcf793c t03 wake up$
>
```



## [Task 08](https://github.com/InessaRepeshko/ucode-connect-Marathon-C/tree/main/sprint00/t08)

**NAME**

Ignore them all

**SUBMIT**

```.gitignore```

**DESCRIPTION**

Create a ```.gitignore``` for next files: 
* .DS_Store
* ._.DS_Store
* *.o
* *.out

Hint: use it in your challenge repository.

**CONSOLE OUTPUT**
```
>touch .DS_Store && touch kek.o
>git ls-files --ignored --exclude-standard --others | cat -e
.DS_Store$
kek.o$
>
```



## [Task 09](https://github.com/InessaRepeshko/ucode-connect-Marathon-C/tree/main/sprint00/t09)

**NAME**

List directory contents

**SUBMIT**

```ls.sh```

**DESCRIPTION**

Create a script that:
* takes a file/directory as an argument
* shows all files/directories inside a given directory except for . and ..
* displays their sizes separated by a single space
* sorts by file/directory name

Take into account, your script does not need to deal with files that have major and minor numbers.

**CONSOLE OUTPUT**
```
>zsh ls.sh . | cat -e
ls.sh 51B$
>zsh ls.sh /bin | cat -e
bash 604K$
cat 23K$
chmod 33K$
cp 28K$
csh 371K$
date 28K$
...
zsh 596K$ >
```



## [Task 10](https://github.com/InessaRepeshko/ucode-connect-Marathon-C/tree/main/sprint00/t10)

**NAME**

File difference

**SUBMIT**

```diff.sh```

**DESCRIPTION**

Create a script that:
* takes three files as arguments
* finds a difference between two files
* writes their ```difference``` to the third file

**CONSOLE OUTPUT**
```
>zsh diff.sh t10_1.txt t10_2.txt difference.txt
>cat -e difference.txt
6c6$
< <string>YES</string>$
---$
> <string>NO</string>$
18c18$
< <string>59</string>$
---$
> <string>69</string>$
28c28$
< <string>44</string>$
---$
> <string>46</string>$
>
```



## [Task 11](https://github.com/InessaRepeshko/ucode-connect-Marathon-C/tree/main/sprint00/t11)

**NAME**

Download

**SUBMIT**

```download.sh```

**DESCRIPTION**

Create a script that:
* takes a ```url``` and a ```filename``` as first and second arguments respectively
* downloads an image from the url and saves it to the file with the given filename

**CONSOLE OUTPUT**
```
>zsh download.sh https://lms.ucode.world/api/media/protocol_resources/sprint00/p4ujh.jpg image.jpg
  % Total    % Received % Xferd  Average Speed   Time    Time     Time  Current
                                 Dload  Upload   Total   Spent    Left  Speed
100  161k  100  161k    0     0  89933      0  0:00:01  0:00:01 --:--:-- 89961
>open image.jpg
>
```



## [Task 12](https://github.com/InessaRepeshko/ucode-connect-Marathon-C/tree/main/sprint00/t12)

**NAME**

Pipe

**SUBMIT**

```pipe.sh```

**DESCRIPTION**

Create a script that:
* takes a file as an argument. The file contains Matrix characters formatted as in the CONSOLE OUTPUT section
* shows only ```redpill``` entities from the file changed into ```bluepill```. Be sure to pay attention to the script's work in the CONSOLE OUTPUT
* contains only one-line instruction

**CONSOLE OUTPUT**
```
>cat -e characters
Agent #0 strength:8 power:5$
Agent #1 strength:5 power:5$
Redpill Anderson strength:6 power:8$
Agent #2 strength:3 power:6$
Ageredpillnt Dozer strength:2 power:4$
redpill Dozer strength:2 power:4$
reDPill Trinity strength:7 power:8$
>zsh pipe.sh characters | cat -e
bluepill Anderson strength:6 power:8$
bluepill Dozer strength:2 power:4$
bluepill Trinity strength:7 power:8$
>
```




## [Task 13](https://github.com/InessaRepeshko/ucode-connect-Marathon-C/tree/main/sprint00/t13)

**NAME**

Tar me

**SUBMIT**

```tar.sh```

**DESCRIPTION**

Create a script that:
* creates a new archive with the given archive name and file/directory set ```tar.sh [-c] [name.tar] [file ...]```
* extracts files from the given archive ```tar.sh [-e] [name.tar]```

**CONSOLE OUTPUT**
```
>ls
dir1   dir2   file1  file2  tar.sh
>zsh tar.sh -c arch.tar dir1 dir2 file1 file2
>ls
arch.tar dir1     dir2     file1
>rm -df dir1 dir2 file1 file2
>ls
arch.tar tar.sh
>zsh tar.sh -e arch.tar
>ls
arch.tar dir1     dir2     file1
>
```



## [Task 14](https://github.com/InessaRepeshko/ucode-connect-Marathon-C/tree/main/sprint00/t14)

**NAME**

Alias

**SUBMIT**

```alias.sh```

**DESCRIPTION**

Create a script ```alias.sh``` that takes a filename as a command-line argument and writes in this file the aliases listed below:
* ```ga``` for ```git add``` command
* ```gcmsg``` for ```git commit -m``` command
* ```gp``` for ```git push``` command

Also, take into account that:
* aliases in the file must be in the same order as above
* each alias in the file must be followed by a newline

Find out how to put these aliases to work in your Terminal permanently to use during the entire Marathon C.

**CONSOLE OUTPUT**
```
>ls
alias.sh
>ga
zsh: command not found: ga
>zsh alias.sh source_me
>ls
alias.sh  source_me
>source source_me
>ga
Nothing specified, nothing added.
Maybe you wanted to say 'git add .'?
>gcmsg
error: switch `m' requires a value
>
```
