#! /usr/bin/python
# -*- coding: utf-8 -*-
import cpplib
pet = cpplib.Pet("pochi")
print(pet.name)

pet2 = cpplib.Dog("shiro")
print(pet2.name)
print(pet2.Bark())
