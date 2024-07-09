def main():
    try:
        br = BufferedReader(InputStreamReader(System.in))
        pw = PrintWriter(System.out)
        input_array = br.readline().split(' ')
        result = 0
        for str in input_array:
            result += 1
            if '0' == str:
                break
        pw.println(result)
        br.close()
        pw.close()
    except IOException as e:
        print('Error:'+ str(e))