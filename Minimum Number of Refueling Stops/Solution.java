class Solution {
    public int minRefuelStops(int target, int tank, int[][] stations) {
        // max heap storing liters of gas in stations
        PriorityQueue<Integer> heap = new PriorityQueue<>((a,b) -> b-a);
        int res = 0, prevLoc = 0;
        
        for (int[] station: stations) {
            int loc = station[0];
            int gas = station[1];
            
            tank -= (loc - prevLoc);
            
            // retrospectively refuel
            while (!heap.isEmpty() && tank < 0) { 
                tank += heap.poll();
                res++;
            }

            if (tank < 0) return -1;
            
            heap.offer(gas);
            prevLoc = loc;
        }

        
        // now assume we reach the target 
        tank -= (target - prevLoc);
        while (!heap.isEmpty() && tank < 0) {
            tank += heap.poll();
            res++;
        }
        
        if (tank < 0) return -1;
        return res;
    }
}