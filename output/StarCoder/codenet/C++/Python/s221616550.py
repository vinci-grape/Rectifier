s = raw_input()
if s == s[::-1] and s[:len(s)/2] == s[:len(s)/2][::-1]:
    print "Yes"
else:
    print "No"