#! /usr/bin/python
# -*- coding: utf-8 -*-
import cpplib
pet = cpplib.Pet("pochi", cpplib.Pet.Dog)
print(pet.type)

pet2 = cpplib.Pet("pochi", cpplib.Pet.Cat)
print(pet2.type)
print(int(pet2.type))
