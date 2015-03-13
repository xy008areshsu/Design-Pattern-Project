
from FlyStrategy import CanFly
from FlyStrategy import CannotFly


class Animal:
    def __init__(self, fly_strategy, name, height):
        self.fly_strategy = fly_strategy
        self.name = name
        self.height = height

    def try_to_fly(self):
        return self.fly_strategy.fly()

    def set_fly_strategy(self, fly_strategy):
        self.fly_strategy = fly_strategy

if __name__ == '__main__':
    can_fly = CanFly()
    cannot_fly = CannotFly()
    bird = Animal(can_fly, "Wong", 160)
    dog = Animal(cannot_fly, "Barf", 170)
    print(bird.try_to_fly())
    print(dog.try_to_fly())


