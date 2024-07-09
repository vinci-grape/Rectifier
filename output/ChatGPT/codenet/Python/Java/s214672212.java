int[] nums = Arrays.stream(scanner.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
Arrays.sort(nums);
System.out.println(nums[2] + nums[1] + nums[0]*10);