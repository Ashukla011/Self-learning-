## Unsupervised PreTuning
 - self supervised learning

## SFT - Superbised FineTuning
 1. On Parameter level
     - Full Fine Tuning 
       train we train all the parameter(waight & biases) it reqcuire more or huge memory. it require multi CPU set if data is huge
  2. Parcial Fine Tuning 
    - There are two method 
        1. old school metho 
             - Freeze all layer retrain lat o/p layer 
             - freeze some starting layer and retrain some last layer
             - > [!Note]
             - > These are above techniqe be follow in CNN based modle, Early stage LLM like BERS, T5, BART
             - > Large Languge model - Buil top of Transformaer

        2. Parameter Efficiant Finturning
             - LoRa
             - QLoRA - Q - Quantization (In Quanlize model use 1. Lover Precision model) (2. Memory efficiant loding)
             - This PEFT technique might work  with single GPU and smaller VRAM

             - DORA
             - Adaptor Layer (Inpaired by LoRA)
             - BitFit
             - IA3
             - PreFix Tuning
             - Prompt tuning


## On Data Level - Based on the Data Praipration 
     1. Non - Instractional fin etruing 
      
     2. Instructional fine turing

     3. Alignment with the human feadback
        - Prefrence based learning 
        - 
    
