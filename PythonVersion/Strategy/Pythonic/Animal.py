import FlyStrategy

class Animal:
    def __init__(self, fly_strategy, name, height):
        self.fly_strategy = fly_strategy
        self.name = name
        self.height = height



if __name__ == '__main__':
    bird = Animal(FlyStrategy.can_fly, "Wong", 160)    # function as callable, first class object
    dog = Animal(FlyStrategy.cannot_fly, "Barf", 170)
    print(bird.fly_strategy())
    print(dog.fly_strategy())