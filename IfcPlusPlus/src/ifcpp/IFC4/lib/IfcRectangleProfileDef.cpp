/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAxis2Placement2D.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcProfileProperties.h"
#include "ifcpp/IFC4/include/IfcProfileTypeEnum.h"
#include "ifcpp/IFC4/include/IfcRectangleProfileDef.h"

// ENTITY IfcRectangleProfileDef 
IfcRectangleProfileDef::IfcRectangleProfileDef() {}
IfcRectangleProfileDef::IfcRectangleProfileDef( int id ) { m_id = id; }
IfcRectangleProfileDef::~IfcRectangleProfileDef() {}
shared_ptr<IfcPPObject> IfcRectangleProfileDef::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcRectangleProfileDef> copy_self( new IfcRectangleProfileDef() );
	if( m_ProfileType ) { copy_self->m_ProfileType = dynamic_pointer_cast<IfcProfileTypeEnum>( m_ProfileType->getDeepCopy(options) ); }
	if( m_ProfileName ) { copy_self->m_ProfileName = dynamic_pointer_cast<IfcLabel>( m_ProfileName->getDeepCopy(options) ); }
	if( m_Position ) { copy_self->m_Position = dynamic_pointer_cast<IfcAxis2Placement2D>( m_Position->getDeepCopy(options) ); }
	if( m_XDim ) { copy_self->m_XDim = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_XDim->getDeepCopy(options) ); }
	if( m_YDim ) { copy_self->m_YDim = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_YDim->getDeepCopy(options) ); }
	return copy_self;
}
void IfcRectangleProfileDef::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCRECTANGLEPROFILEDEF" << "(";
	if( m_ProfileType ) { m_ProfileType->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_ProfileName ) { m_ProfileName->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Position ) { stream << "#" << m_Position->m_id; } else { stream << "*"; }
	stream << ",";
	if( m_XDim ) { m_XDim->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_YDim ) { m_YDim->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcRectangleProfileDef::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
const std::wstring IfcRectangleProfileDef::toString() const { return L"IfcRectangleProfileDef"; }
void IfcRectangleProfileDef::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 5 ){ std::stringstream err; err << "Wrong parameter count for entity IfcRectangleProfileDef, expecting 5, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_ProfileType = IfcProfileTypeEnum::createObjectFromSTEP( args[0], map );
	m_ProfileName = IfcLabel::createObjectFromSTEP( args[1], map );
	readEntityReference( args[2], m_Position, map );
	m_XDim = IfcPositiveLengthMeasure::createObjectFromSTEP( args[3], map );
	m_YDim = IfcPositiveLengthMeasure::createObjectFromSTEP( args[4], map );
}
void IfcRectangleProfileDef::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcParameterizedProfileDef::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "XDim", m_XDim ) );
	vec_attributes.push_back( std::make_pair( "YDim", m_YDim ) );
}
void IfcRectangleProfileDef::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcParameterizedProfileDef::getAttributesInverse( vec_attributes_inverse );
}
void IfcRectangleProfileDef::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcParameterizedProfileDef::setInverseCounterparts( ptr_self_entity );
}
void IfcRectangleProfileDef::unlinkFromInverseCounterparts()
{
	IfcParameterizedProfileDef::unlinkFromInverseCounterparts();
}
