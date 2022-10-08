class User:
    def __init__(self):
        self.rank = -8
        self.progress = 0
        
    def inc_progress(self, x):
        original_rank = self.rank
        if x >= 9 or x <= -9 or x == 0:
            raise ValueError("Enter Valid Rank")
        difference = (x - self.rank)
        if x >= 0 and self.rank < 0:
            difference -= 1
        if x <= (self.rank - 2):
            self.progress += 0
            if self.rank == 1 and x == -1:
                self.progress += 1
        elif x == (self.rank - 1):
            self.progress += 1
        elif x == self.rank:
            self.progress += 3
        else:
            self.progress += (10 * difference * difference)
            if self.progress >= 100:
                rank_to_add = self.progress // 100
                self.rank += rank_to_add
                if original_rank <= -1:
                    if self.rank >= 0:
                        self.rank += 1
                self.progress -= rank_to_add * 100
        if self.rank >= 8:
            self.rank = 8
            self.progress = 0
