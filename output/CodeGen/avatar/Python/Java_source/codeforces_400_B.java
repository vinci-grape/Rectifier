public class codeforces_400_B {
    public int numUniqueEmails(String[] emails) {
        Set<String> set = new HashSet<>();
        for (String email : emails) {
            String[] parts = email.split("@");
            if (parts.length!= 2) {
                return -1;
            }
            String name = parts[0];
            String domain = parts[1];
            StringBuilder sb = new StringBuilder();
            sb.append(name).append(".").append(domain);
            set.add(sb.toString());
        }
        return set.size();
    }
}