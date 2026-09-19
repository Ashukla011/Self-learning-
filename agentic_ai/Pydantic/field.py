from fastapi import FastAPI
from pydantic import BaseModel, Field

app = FastAPI()
class Model(BaseModel):
    name : str = Field(frozen = True) # # Field : adds validation rules, constraints, metadata, or configuration to a specific model attribute.

@app.get("/")
def home():
    return 