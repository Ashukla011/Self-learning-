# Pydantic
- pydantic is the most widely used data validatoin library for python
- fast: Pydantic validates and converts dat quickly
- Extensible : You can create custom validation rules 
- Play nicely with you brain : Models are readble , so develpers can easily understand the expected dat 
- Validates incoming data (User(name="avni",age="wrong))
Supports strict validation : convert a validate model into a dictionary or JSON: user.model_dump() , user.model_dump_json()
- without pydantic, we could validate request data manually or use alternatives such as marshmallow, Cerberus, or Python dataclass, 

- Pydantic is preferred in FastAPI because it provides vaidation, parsing, serialization clear errors, and automatic documentation using standard python type hints