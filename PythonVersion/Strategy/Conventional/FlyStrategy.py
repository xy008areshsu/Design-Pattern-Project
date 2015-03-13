
class FlyStrategy:
    def fly(self):
        raise NotImplementedError()


class CanFly(FlyStrategy):
    def fly(self):
        return "I believe I can fly!"



class CannotFly(FlyStrategy):
    def fly(self):
        return "I cannot fly!"

