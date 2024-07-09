s = raw_input()
for i in range(97,123):
	if s.count(chr(i)) == 0:
		print chr(i)
		break
else:
	print "None"