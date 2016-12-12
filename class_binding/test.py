#! /usr/bin/python
# -*- coding: utf-8 -*-
import cpplib
pet = cpplib.Pet("pochi")
print(pet.getName())
pet.setName("tama")
print(pet.getName())
