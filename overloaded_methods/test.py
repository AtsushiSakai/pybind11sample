#! /usr/bin/python
# -*- coding: utf-8 -*-
import cpplib
pet = cpplib.Pet("pochi", 10)
print(pet.name)
print(pet.age)
pet.Set("shiro")
pet.Set(20)
print(pet.name)
print(pet.age)
