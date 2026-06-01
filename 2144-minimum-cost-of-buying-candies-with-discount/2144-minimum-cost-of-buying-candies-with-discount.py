class Solution:
    def minimumCost(self, cost: List[int]) -> int:
        cost.sort()
        cost=cost[::-1]
        price=0
        for i in range(0,len(cost),3):
            price += cost[i]
            if i + 1 < len(cost):
                price += cost[i + 1]
        
        return price