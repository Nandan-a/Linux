def1=$1
def2=$2
main=$3

a=`gcc $1.c -c`
b=`gcc $2.c -c`
c=`gcc $3.c -c`

allo=`gcc $1.o $2.o $3.o`

echo $a
echo $b
echo $c
echo $allo
echo `./a.out`

