public class codeforces_518_B {
    public int numSimilarGroups(String[] A, String[] B) {
        int yay = 0;
        int whoops = 0;
        HashMap<Character, Integer> freqs = new HashMap<Character, Integer>();
        HashMap<Character, Integer> freqt = new HashMap<Character, Integer>();
        for (String s : A) {
            for (char letra : s.toCharArray()) {
                if (freqs.containsKey(letra)) {
                    freqs.put(letra, freqs.get(letra) + 1);
                } else {
                    freqs.put(letra, 1);
                }
            }
        }
        for (String t : B) {
            for (char letra : t.toCharArray()) {
                if (freqt.containsKey(letra)) {
                    freqt.put(letra, freqt.get(letra) + 1);
                } else {
                    freqt.put(letra, 1);
                }
            }
        }
        for (char letra : freqs.keySet()) {
            while (freqs.get(letra) > 0 && letra in freqt && freqt.get(letra) > 0) {
                yay++;
                freqs.put(letra, freqs.get(letra) - 1);
                freqt.put(letra, freqt.get(letra) - 1);
            }
        }
        for (char letra : freqs.keySet()) {
            while (freqs.get(letra) > 0) {
                if (letra.isLowerCase() && letra.toUpperCase() in freqt.keySet() && freqt.get(letra.toUpperCase()) > 0) {
                    whoops++;
                    freqs.put(letra, freqs.get(letra) - 1);
                    freqt.put(letra.toUpperCase(), freqt.get(letra.toUpperCase()) - 1);
                } else if (letra.isUpperCase() && letra.toLowerCase() in freqt.keySet() && freqt.get(letra.toLowerCase()) > 0) {
                    whoops++;
                    freqs.put(letra, freqs.get(letra) - 1);
                    freqt.put(letra.toLowerCase(), freqt.get(letra.toLowerCase()) - 1);
                } else {
                    break;
                }
            }
        }
        return yay + whoops;
    }
}