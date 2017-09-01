ADD=$( ifconfig | grep "inedt " | awk '{print $2}' );
if [ -z "$ADD" ]; then
	echo "Je suis perdu!";
else
	ifconfig | grep "inet " | awk '{print $2}';
fi
