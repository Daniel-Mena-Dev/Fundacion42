ifconfig | grep "ether" | sed "s+ether++g" | cut -d ' ' -f 2 | grep -v 'autoselect'
