echo "Enter year"
read y
a=`expr $y % 4`
if [ $a -eq 0 ]
	then 
	echo "Leap year."
else
	echo "Not Leap year."
fi
