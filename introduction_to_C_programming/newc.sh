echo "#include <stdio.h>" > $1
echo "int main() {" >> $1
echo -e "\t" >> $1
echo "}" >> $1
vi +3 $1
