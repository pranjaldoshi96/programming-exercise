# THis is read me 
Using readme with something<br>
<table>
    <thead>
        <tr>
            <th>Argument</th>
            <th>Allowed Values</th>
            <th>Description</th>
            <th>Default</th>
            <th>Required</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td rowspan=3>--sanity</td>
            <td>e2e</td>
            <td>Validate all features of domain builder app</td>
            <td rowspan=3>None</td>
            <td rowspan=3>Yes</td>
        </tr>
        <tr>
            <td>build_bot</td>
            <td>Validate bot config generation</td>
        </tr>
        <tr>
            <td>dataset_convert</td>
            <td>Validate data conversion from nemo to yaml and vice-versa</td>
        </tr>
        <tr>
            <td rowspan=3>--model_type</td>
            <td>bert-base-uncased</td>
            <td rowspan=3>Type of model for which sanity test needs to run</td>
            <td rowspan=3>bert-base-uncased</td>
            <td rowspan=3>No</td>
        </tr>
        <tr>
            <td>distilbert-base-uncased</td>
        </tr>
        <tr>
            <td>all</td>
        </tr>
    </tbody>
</table>

