echo "Enter the number: "
read num
i=`expr $num % 2`
if [ $i -eq 0 ]
#if [ (($num %2 )==0) ]
	then
	echo "The number is even."
else
	echo "The number is odd."
fi
