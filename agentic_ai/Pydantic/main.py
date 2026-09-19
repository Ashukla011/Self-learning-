from fastapi import FastAPI
from pydantic import BaseModel, PositiveInt, ValidationError, ConfigDict
from datetime import datetime
app = FastAPI()
'''
BaseModel is Pydantic’s foundational class for defining structured data models using Python type annotations. 
By inheriting from it, a class gets automatic validation, compatible type conversion, serialization to 
dictionaries or JSON, clear validation errors, and JSON Schema generation. FastAPI commonly uses BaseModel
to validate request and response bodies, but it is not itself a database model.
'''
class User (BaseModel):
    id:int
    name:str
    signup_ts:datetime | None
    tastes: dict[str,PositiveInt]
    config_control = ConfigDict(str_max_length =10)
# PositiveInt is a Pydantic type that accepts only integers greater than zero.

external_data ={
    'id':"123",
    'name':"avni",
    "signup_ts":'2019-06-06 12:22',
    'tastes':{
        'wine':9,
        'cheese':7,
        'cabbage':'1',
    }
    # tastes: dict[str, Annotated[int, Field(gt=0)]] gt: greater than 0 
}

# user = User.model_validate(external_data)
# ** is Python’s dictionary-unpacking operator when passing keyword arguments to a function or class.
''' 
A dictionary is like a closed parcel containing multiple labelled items. If I pass the dictionary 
without **, I give the function the whole parcel as one argument. If I use **, Python opens the parcel
and distributes each labelled item to the matching parameter. The dictionary keys become parameter names,
and the dictionary values become their values. 
'''
try:
    user = User.model_validate(external_data)
except ValidationError as e:
    print(e.error())
    """"""
@app.get("/data")
def home():
    return user
