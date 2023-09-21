#!/usr/bin/python3
import os
import openai
openai.api_key = os.getenv("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")
openai.Model.list()